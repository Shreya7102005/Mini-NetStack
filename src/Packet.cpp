#include "../include/Packet.h"

Packet::Packet(std::string srcIP, std::string destIP,
               std::string proto, int srcPort, int destPort)
    : sourceIP(srcIP),
      destinationIP(destIP),
      protocol(proto),
      sourcePort(srcPort),
      destinationPort(destPort) {
}

std::string Packet::getSourceIP() const {
    return sourceIP;
}

std::string Packet::getDestinationIP() const {
    return destinationIP;
}

std::string Packet::getProtocol() const {
    return protocol;
}

int Packet::getSourcePort() const {
    return sourcePort;
}

int Packet::getDestinationPort() const {
    return destinationPort;
}
