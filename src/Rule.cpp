#include "../include/Rule.h"

Rule::Rule(std::string proto, int rulePort,
           std::string ruleAction, bool status)
    : protocol(proto),
      port(rulePort),
      action(ruleAction),
      enabled(status) {
}

bool Rule::matches(const std::string& packetProtocol, int packetPort) const {
    return enabled &&
           protocol == packetProtocol &&
           port == packetPort;
}

std::string Rule::getAction() const {
    return action;
}

bool Rule::isEnabled() const {
    return enabled;
}
