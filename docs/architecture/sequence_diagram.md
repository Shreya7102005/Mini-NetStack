# Mini NetStack – UML Sequence Diagram

```text
User
 |
 | Enter packet information
 v
CLI
 |
 | Create packet
 v
Packet Manager
 |
 | Send packet for validation
 v
Packet Parser
 |
 | Valid packet
 v
Rule Engine
 |
 | Evaluate rules
 v
Packet Filter
 |
 |-------------------|
 |                   |
 v                   v
ALLOWED            BLOCKED
 |                   |
 +---------+---------+
           |
           v
      Statistics
           |
           v
         Logger
           |
           v
          CLI
           |
           v
     Display Result
