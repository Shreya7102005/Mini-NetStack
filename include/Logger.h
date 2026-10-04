#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger {
private:
    std::string logFile;

public:
    Logger(const std::string& fileName);

    void logPacket(const std::string& packetInfo,
                   const std::string& decision) const;
};

#endif
