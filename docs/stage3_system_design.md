# Stage 3 – System Design & Architecture

## Project Title

Mini NetStack: User-Space Packet Filtering and Traffic Isolation Framework

## 1. System Design Overview

Mini NetStack follows a modular architecture in which packet information
passes through different components before a final filtering decision is
made.

The system is designed to keep packet representation, rule evaluation,
filtering, statistics, and logging as separate responsibilities.

The major processing flow is:

User
  ↓
Command-Line Interface
  ↓
Packet Manager
  ↓
Packet Parser
  ↓
Rule Engine
  ↓
Packet Filter
  ↓
Decision
  ├── ALLOW → Statistics → Logger
  └── BLOCK → Statistics → Logger

## 2. Major Components

### 2.1 Command-Line Interface

Provides a simple interface for starting packet processing and viewing
results and statistics.

### 2.2 Packet Manager

Creates and manages packet objects that are processed by the system.

### 2.3 Packet Parser

Extracts and validates packet-related information such as protocol,
source address, destination address, and port.

### 2.4 Rule Engine

Stores predefined filtering rules and evaluates whether a packet matches
an ALLOW or BLOCK condition.

### 2.5 Packet Filter

Uses the result of the rule engine to produce the final packet decision.

### 2.6 Statistics Manager

Maintains counters for total, allowed, and blocked packets.

### 2.7 Logger

Records packet information and filtering decisions in a log file.

## 3. Data Structures

The main data structures planned for the implementation are:

### Packet

The Packet structure/class will contain:

- Source IP address
- Destination IP address
- Protocol
- Source port
- Destination port

### Rule

The Rule structure/class will contain:

- Protocol
- Port
- Action
- Rule status

### Statistics

The Statistics component will maintain:

- Total packets
- Allowed packets
- Blocked packets

## 4. Processing Flow

The packet-processing workflow will follow these steps:

1. The user starts the application through the command-line interface.
2. The system creates or receives packet information.
3. The packet parser validates the packet fields.
4. The rule engine checks the packet against the configured rules.
5. The packet filter determines whether the packet is ALLOWED or BLOCKED.
6. The statistics manager updates the appropriate counters.
7. The logger records the filtering decision.
8. The result is displayed to the user.

## 5. Architecture Diagram

The logical architecture of the system is:

    +----------------------+
    |   Command Line UI    |
    +----------+-----------+
               |
               v
    +----------------------+
    |    Packet Manager    |
    +----------+-----------+
               |
               v
    +----------------------+
    |    Packet Parser     |
    +----------+-----------+
               |
               v
    +----------------------+
    |     Rule Engine      |
    +----------+-----------+
               |
               v
    +----------------------+
    |    Packet Filter     |
    +----------+-----------+
               |
          +----+----+
          |         |
          v         v
       ALLOWED    BLOCKED
          |         |
          +----+----+
               |
        +------+------+
        |             |
        v             v
    Statistics      Logger

## 6. System Responsibilities

| Component | Responsibility |
|-----------|----------------|
| CLI | User interaction |
| Packet Manager | Packet object management |
| Packet Parser | Packet validation and interpretation |
| Rule Engine | Rule matching |
| Packet Filter | ALLOW/BLOCK decision |
| Statistics | Traffic counters |
| Logger | Event recording |

## 7. Implementation Strategy

The implementation will follow a modular C++ design.

Separate classes will be created for major responsibilities so that
individual components can be tested independently.

The planned source structure is:

    src/
    ├── main.cpp
    ├── Packet.cpp
    ├── RuleEngine.cpp
    ├── PacketFilter.cpp
    ├── Statistics.cpp
    └── Logger.cpp

The corresponding header files will be maintained in:

    include/

Testing code will be maintained in:

    tests/

Documentation and architecture diagrams will be maintained in:

    docs/

## 8. UML Design

The project will use UML diagrams to describe the system before
implementation.

The following diagrams will be prepared:

### Class Diagram

The class diagram will show the relationships between:

- Packet
- Rule
- RuleEngine
- PacketFilter
- Statistics
- Logger

### Sequence Diagram

The sequence diagram will describe the interaction between the user,
packet processor, rule engine, packet filter, statistics manager, and
logger during packet processing.

### State Machine Diagram

The packet-processing states will be represented as:

    CREATED
       |
       v
    PARSED
       |
       v
    EVALUATED
      / \
     /   \
    v     v
 ALLOWED BLOCKED
     \     /
      \   /
       v
    LOGGED
       |
       v
    COMPLETED

## 9. Development Tools

The following tools will be used during implementation:

- Ubuntu Linux through WSL 2
- GNU C++ compiler
- CMake
- Git
- GitHub
- VS Code or Nano
- Linux terminal

## 10. Version Control Strategy

Git will be used to maintain the project history.

Meaningful commits will be created after major milestones such as:

- Requirements completion
- Architecture completion
- Packet model implementation
- Rule engine implementation
- Packet filtering implementation
- Testing completion
- Final documentation

The main branch will contain stable versions of the project.

## 11. Design Goal

The main design goal is to keep the system simple, modular, and
understandable while demonstrating concepts from Linux, C++, networking,
system programming, and software engineering.

The architecture will also allow future expansion without requiring a
complete redesign of the existing modules.
