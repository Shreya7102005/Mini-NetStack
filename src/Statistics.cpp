#include "../include/Statistics.h"

#include <iostream>

Statistics::Statistics()
    : totalPackets(0),
      allowedPackets(0),
      blockedPackets(0) {
}

void Statistics::recordAllowed() {
    totalPackets++;
    allowedPackets++;
}

void Statistics::recordBlocked() {
    totalPackets++;
    blockedPackets++;
}

void Statistics::display() const {
    std::cout << "\n--- Packet Statistics ---\n";
    std::cout << "Total Packets: " << totalPackets << '\n';
    std::cout << "Allowed Packets: " << allowedPackets << '\n';
    std::cout << "Blocked Packets: " << blockedPackets << '\n';
}
