#include "../include/RuleEngine.h"

void RuleEngine::addRule(const Rule& rule) {
    rules.push_back(rule);
}

std::string RuleEngine::evaluate(const Packet& packet) const {
    for (const Rule& rule : rules) {
        if (rule.matches(packet.getProtocol(),
                         packet.getDestinationPort())) {
            return rule.getAction();
        }
    }

    return "ALLOW";
}
