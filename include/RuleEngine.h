#ifndef RULE_ENGINE_H
#define RULE_ENGINE_H

#include <vector>
#include "Rule.h"
#include "Packet.h"

class RuleEngine {
private:
    std::vector<Rule> rules;

public:
    void addRule(const Rule& rule);
    std::string evaluate(const Packet& packet) const;
};

#endif
