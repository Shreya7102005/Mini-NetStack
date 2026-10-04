#include <iostream>
#include <string>

#include "../include/Packet.h"
#include "../include/Rule.h"
#include "../include/RuleEngine.h"
#include "../include/PacketFilter.h"
#include "../include/Statistics.h"
#include "../include/Logger.h"

int main() {
    RuleEngine engine;

    engine.addRule(Rule("TCP", 23, "BLOCK"));
    engine.addRule(Rule("TCP", 443, "ALLOW"));
    engine.addRule(Rule("UDP", 53, "ALLOW"));

    PacketFilter filter(engine);
    Statistics stats;
    Logger logger("logs/traffic.log");

    Packet packet(
        "192.168.1.10",
        "8.8.8.8",
        "TCP",
        5000,
        443
    );

    std::string decision = filter.filterPacket(packet);

    if (decision == "ALLOW") {
        stats.recordAllowed();
    } else {
        stats.recordBlocked();
    }

    std::string packetInfo =
        packet.getSourceIP() + " -> " +
        packet.getDestinationIP() + " | " +
        packet.getProtocol() + " | Port: " +
        std::to_string(packet.getDestinationPort());

    logger.logPacket(packetInfo, decision);

    std::cout << "\nPacket: " << packetInfo << '\n';
    std::cout << "Decision: " << decision << '\n';

    stats.display();

    return 0;
}
