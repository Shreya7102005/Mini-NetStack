#ifndef RULE_H
#define RULE_H

#include <string>

class Rule {
private:
    std::string protocol;
    int port;
    std::string action;
    bool enabled;

public:
    Rule(std::string proto, int rulePort,
         std::string ruleAction, bool status = true);

    bool matches(const std::string& packetProtocol, int packetPort) const;
    std::string getAction() const;
    bool isEnabled() const;
};

#endif
