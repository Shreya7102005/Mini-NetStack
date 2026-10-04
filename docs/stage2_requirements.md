# Stage 2 – Project Requirements & Development Plan

## Project Title

Mini NetStack: User-Space Packet Filtering and Traffic Isolation Framework

## 1. Project Overview

Mini NetStack is a lightweight Linux-based C++ framework designed to
demonstrate basic network packet analysis, rule-based packet filtering,
traffic statistics, and logging.

The project will operate primarily in user space and will use a modular
design so that packet representation, filtering, statistics, and logging
can be developed and tested independently.

## 2. Functional Requirements

The system shall provide the following functionality:

1. Represent network packets using suitable C++ data structures.
2. Store information such as source IP, destination IP, protocol, and port.
3. Accept or generate packet information for processing.
4. Apply predefined filtering rules to packets.
5. Classify packets as ALLOWED or BLOCKED.
6. Maintain the total number of processed packets.
7. Maintain the number of allowed and blocked packets.
8. Record filtering decisions in a log file.
9. Display packet-processing results through a command-line interface.
10. Provide a modular structure that can be extended with additional
    filtering rules and networking features.

## 3. Non-Functional Requirements

The system should satisfy the following requirements:

- The application should run on a Linux environment.
- The implementation should use C++.
- The code should follow object-oriented programming principles.
- The system should be modular and easy to maintain.
- Packet processing should provide clear and consistent results.
- The application should handle invalid input gracefully.
- Important events and filtering decisions should be logged.
- The project should use Git for version control.
- The source code should be maintained in a GitHub repository.
- The project should include proper documentation and testing.

## 4. Project Modules

The project will be divided into the following major modules:

### Module 1 – Packet Model

Responsible for representing packet information such as source address,
destination address, protocol, source port, and destination port.

### Module 2 – Packet Parser

Responsible for reading and interpreting packet information before it is
sent to the filtering engine.

### Module 3 – Rule Engine

Responsible for storing and evaluating predefined filtering rules.

### Module 4 – Packet Filter

Responsible for making the final ALLOW or BLOCK decision based on the
rules provided by the rule engine.

### Module 5 – Statistics Manager

Responsible for maintaining packet-processing statistics such as total,
allowed, and blocked packets.

### Module 6 – Logger

Responsible for recording packet-processing events and filtering
decisions in a log file.

### Module 7 – Command-Line Interface

Responsible for providing a simple interface through which the user can
run the system and view packet-processing results.

## 5. Project Deliverables

The following deliverables will be produced during the project:

- Working C++ prototype
- Project source code
- Project documentation
- System architecture diagram
- UML class diagram
- UML sequence diagram
- UML state machine diagram
- Test cases and test results
- Git repository with continuous commits
- Final README documentation
- Final project presentation

## 6. Development Environment

The project will be developed using:

- Operating System: Ubuntu Linux through WSL 2
- Programming Language: C++
- Compiler: GNU G++
- Build System: CMake
- Version Control: Git
- Repository: GitHub
- Editor: VS Code / Nano

## 7. Development Plan

The project will be developed in the following stages:

| Stage | Work |
|------|------|
| Stage 1 | Project introduction and problem definition |
| Stage 2 | Requirements and development plan |
| Stage 3 | System architecture and UML design |
| Stage 4 | Core C++ implementation and prototype |
| Stage 5 | Testing, debugging and improvements |
| Stage 6 | Final documentation and presentation |

## 8. Project Timeline

The initial prototype is planned to be completed within approximately
5–6 hours of focused development.

The development will follow an incremental approach, with each major
milestone committed to Git and pushed to GitHub.

## 9. Success Criteria

The project will be considered successful when:

- The application compiles and runs successfully on Linux.
- Packets can be represented and processed.
- Filtering rules can be applied correctly.
- Packets can be classified as ALLOWED or BLOCKED.
- Statistics are generated correctly.
- Filtering decisions are logged.
- The project is documented properly.
- The project contains meaningful Git commits.
- The final source code is available on GitHub.

## 10. Future Scope

The project can later be extended with:

- Real-time packet capture
- Network-interface integration
- More advanced filtering rules
- Multithreaded packet processing
- Performance monitoring
- Linux kernel integration
- Graphical monitoring interface
- Additional network protocols
