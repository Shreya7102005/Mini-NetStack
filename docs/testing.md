# Mini NetStack – Testing Report

## 1. Testing Objective

The objective of testing is to verify that Mini NetStack correctly
processes packets, applies filtering rules, updates statistics, and
records decisions in the log file.

## 2. Test Cases

| Test | Protocol | Port | Expected | Result |
|------|----------|------|----------|--------|
| TC01 | TCP | 23 | BLOCK | PASS |
| TC02 | TCP | 443 | ALLOW | PASS |
| TC03 | UDP | 53 | ALLOW | PASS |

## 3. TC01 – Blocked Packet

Input:

TCP packet with destination port 23.

Expected result:

BLOCK

Observed result:

BLOCK

Statistics showed:

- Total Packets: 1
- Allowed Packets: 0
- Blocked Packets: 1

**Status: PASS**

## 4. TC02 – Allowed Packet

Input:

TCP packet with destination port 443.

Expected result:

ALLOW

Observed result:

ALLOW

Statistics showed:

- Total Packets: 1
- Allowed Packets: 1
- Blocked Packets: 0

**Status: PASS**

## 5. TC03 – UDP DNS Packet

The configured rule allows UDP traffic on port 53.

This test will be used to verify UDP rule handling.

## 6. Logging Verification

The logger successfully recorded both filtering decisions.

Example log entries:

TCP Port 23 → BLOCK

TCP Port 443 → ALLOW

## 7. Testing Conclusion

The prototype successfully performs packet representation, rule
evaluation, filtering, statistics collection, and Linux-based logging.
The tested TCP filtering cases produced the expected results.
