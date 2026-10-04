#ifndef PACKET_FILTER_H
#define PACKET_FILTER_H

#include "Packet.h"
#include "RuleEngine.h"

class PacketFilter {
private:
    RuleEngine& ruleEngine;

public:
    PacketFilter(RuleEngine& engine);
    std::string filterPacket(const Packet& packet) const;
};

#endif
