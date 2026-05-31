USB Shield: Physical Layer Data Defense in Public Ports

Overview

USB Shield is a hardware-based cybersecurity project designed to protect users from potential juice-jacking attacks through public USB charging ports.

The system monitors USB physical-layer communication lines (D+ and D−) and detects suspicious handshake activity that may indicate unauthorized data transfer attempts. Using an Arduino Nano, the system analyzes line activity and provides visual alerts to help users identify safe and unsafe charging environments.

Problem Statement

Public USB charging stations can be exploited to initiate unauthorized data communication with connected devices. Since standard USB communication automatically performs handshaking and enumeration, users may unknowingly expose their devices to security threats such as data theft or malware injection.

Objectives

- Detect suspicious USB data-line activity.
- Monitor D+ and D− communication lines in real time.
- Identify potentially unsafe charging ports.
- Alert users using visual indicators.
- Improve protection against juice-jacking attacks.

Hardware Components

- Arduino Nano
- USB Type-A Female Breakout Board
- USB Type-A Male Breakout Board
- N-Channel MOSFET
- Current Sensor
- LED Indicators
- Resistors

Working Principle

1. A device is connected to a USB charging port.
2. The Arduino Nano monitors the D+ and D− data lines.
3. Data-line activity is analyzed for unexpected communication signals.
4. If suspicious activity is detected, the system classifies the port as unsafe.
5. LED indicators notify the user about the charging port status.
6. The system helps prevent unauthorized USB data communication.

Applications

- Public charging stations
- Airports
- Railway stations
- Shopping malls
- Educational institutions
- Corporate environments

Domain

Cyber Security | Embedded Systems | Hardware Security

