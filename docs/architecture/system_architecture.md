# Mini NetStack – System Architecture

```text
User
  |
  v
Command-Line Interface
  |
  v
Packet Manager
  |
  v
Packet Parser
  |
  v
Rule Engine
  |
  v
Packet Filter
  |
  +---------> ALLOWED
  |
  +---------> BLOCKED
              |
              v
       Statistics Manager
              |
              v
            Logger
