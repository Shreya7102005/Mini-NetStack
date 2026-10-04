#include "../include/PacketFilter.h"

PacketFilter::PacketFilter(RuleEngine& engine)
    : ruleEngine(engine) {
}

std::string PacketFilter::filterPacket(const Packet& packet) const {
    return ruleEngine.evaluate(packet);
}
