# Mini NetStack – UML Class Diagram

```text
+----------------------+
|       Packet         |
+----------------------+
| sourceIP             |
| destinationIP        |
| protocol             |
| sourcePort           |
| destinationPort      |
+----------------------+

+----------------------+
|        Rule          |
+----------------------+
| protocol             |
| port                 |
| action                |
| enabled               |
+----------------------+

+----------------------+
|      RuleEngine      |
+----------------------+
| rules                |
+----------------------+
| addRule()            |
| evaluate()           |
| matchRule()          |
+----------------------+

+----------------------+
|    PacketFilter      |
+----------------------+
| ruleEngine           |
+----------------------+
| filterPacket()       |
+----------------------+

+----------------------+
|     Statistics       |
+----------------------+
| totalPackets         |
| allowedPackets       |
| blockedPackets       |
+----------------------+
| recordAllowed()      |
| recordBlocked()      |
| display()            |
+----------------------+

+----------------------+
|       Logger         |
+----------------------+
| logFile              |
+----------------------+
| logPacket()          |
+----------------------+
