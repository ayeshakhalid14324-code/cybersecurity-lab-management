# cybersecurity-lab-management
C-based prototype for managing cybersecurity laboratory information and calculating lab investment.
Student Information
Student Name: AYESHA KHALID
Student ID: 26K-2002

Project Description
This project is a C-based prototype for managing basic cybersecurity laboratory information. The program collects information about the lab environment and calculates the costs of computers, network devices, and annual security software. It then displays a formatted cybersecurity lab report.

Input
The program asks the user to enter:

Lab name
Number of computers
Number of network devices
Number of security tools
Cost per computer
Cost per network device
Annual security software cost
Processing
The program performs the following calculations:

Computer Cost:

Number of Computers × Cost per Computer

Network Cost:

Number of Network Devices × Cost per Network Device

Total Lab Investment:

Computer Cost + Network Cost + Software Cost

Output
The program displays a formatted report containing:

Lab name
Number of computers
Number of network devices
Number of security tools
Computer cost
Network device cost
Software cost
Total lab investment
How to Compile
Using GCC, compile the program with:

gcc cyber_lab.c -o cyber_lab

Run the program with:

cyber_lab

On Windows, you can also run:

cyber_lab.exe

Sample Output
========================================
       CYBERSECURITY LAB REPORT
========================================
Lab Name             : Cyber Security Lab
Computers            : 30
Network Devices      : 8
Security Tools       : 12
Computer Cost        : 3000000.00
Network Device Cost  : 400000.00
Software Cost        : 500000.00
----------------------------------------
Total Lab Investment : 3900000.00
----------------------------------------
========================================
