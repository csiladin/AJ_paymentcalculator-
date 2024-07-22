Bounce House Delivery and Cleaning Payment Calculator

Description

This C++ project calculates payments for bounce house delivery and cleaning services. It supports multiple stops and bounce houses and computes payments based on predefined rates. This tool helps manage the financial aspects of bounce house services efficiently.

Key Features

- Payment Calculation: Computes delivery and cleaning payments based on specified rates.
- Multiple Stops Support: Handles multiple delivery stops with multiple bounce houses.

Files

- main.cpp: Contains the core logic for user interaction and payment calculations.
- bounce_prices.h: Header file with bounce house names and their delivery prices.








Installation

1. Clone the Repository:
    git clone https://github.com/yourusername/bounce-house-payment-calculator.git
    cd bounce-house-payment-calculator

2. Build the Project:
    Use a C++ compiler to build the project. For example, with g++:
    g++ -o bounce_calculator main.cpp

3. Run the Program:
    ./bounce_calculator

Usage

1. Specify Tasks:
    - Indicate whether you handled delivery, cleaning, or both.

2. Enter Bounce Houses:
    - For delivery tasks, provide bounce house names and quantities for each stop.
    - For cleaning tasks, specify bounce houses cleaned at the warehouse.

3. Input Tips Information:
    - Indicate if tips were received, including the amount and method (cash or on file).

4. View Payment Summary:
    - The program will calculate and display the total payment for all stops and cleaning services.





Example

Enter the number of stops: 2
Stop 1 - Delivery:
Bounce House Name: 18_Dolphin_Wave_Slide
Quantity: 2
...
Stop 2 - Delivery:
Bounce House Name: 22_Tropical_Dual_Lane_Slides
Quantity: 1
...
Did you handle delivery at this stop? (y/n): y
...
Stop 1 - Cleaning:
Bounce House Name: 18_Dolphin_Wave_Slide
Quantity: 2
...
Total payment for all stops: $[amount]
Total payment for cleaning: $[amount]





License

This project is licensed under the MIT License - see the LICENSE file for details.
