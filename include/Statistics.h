#ifndef STATISTICS_H
#define STATISTICS_H

class Statistics {
private:
    int totalPackets;
    int allowedPackets;
    int blockedPackets;

public:
    Statistics();

    void recordAllowed();
    void recordBlocked();
    void display() const;
};

#endif
