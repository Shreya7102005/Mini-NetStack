#include "../include/Logger.h"

#include <fcntl.h>
#include <unistd.h>
#include <string>

Logger::Logger(const std::string& fileName)
    : logFile(fileName) {
}

void Logger::logPacket(const std::string& packetInfo,
                       const std::string& decision) const {
    std::string message =
        packetInfo + " | Decision: " + decision + "\n";

    int fd = open(logFile.c_str(), O_WRONLY | O_CREAT | O_APPEND, 0644);

    if (fd == -1) {
        return;
    }

    write(fd, message.c_str(), message.size());
    close(fd);
}
