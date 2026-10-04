# Mini NetStack

## User-Space Packet Filtering and Traffic Isolation Framework

Mini NetStack is an educational C++ project that demonstrates packet representation, rule-based filtering, traffic statistics, and Linux system-level logging.

## Features

- Packet representation using C++
- ALLOW/BLOCK rule-based filtering
- TCP and UDP rule handling
- Packet statistics
- Linux system-call based logging
- Modular object-oriented design

## Architecture

User → CLI → Packet Manager → Packet Parser → Rule Engine → Packet Filter → Decision → Statistics + Logger

## Technologies

- C++
- Linux / Ubuntu WSL2
- GNU g++
- Git and GitHub
- Linux system calls

## Example Rules

| Protocol | Port | Action |
|----------|------|--------|
| TCP | 23 | BLOCK |
| TCP | 443 | ALLOW |
| UDP | 53 | ALLOW |

## Example Output

```text
Packet: 192.168.1.10 -> 8.8.8.8 | TCP | Port: 443
Decision: ALLOW

--- Packet Statistics ---
Total Packets: 1
Allowed Packets: 1
Blocked Packets: 0





