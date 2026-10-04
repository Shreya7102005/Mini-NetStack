#ifndef PACKET_H
#define PACKET_H

#include <string>

class Packet {
private:
    std::string sourceIP;
    std::string destinationIP;
    std::string protocol;
    int sourcePort;
    int destinationPort;

public:
    Packet(std::string srcIP, std::string destIP,
           std::string proto, int srcPort, int destPort);

    std::string getSourceIP() const;
    std::string getDestinationIP() const;
    std::string getProtocol() const;
    int getSourcePort() const;
    int getDestinationPort() const;
};

#endif
