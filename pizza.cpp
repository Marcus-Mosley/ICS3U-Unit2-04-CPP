// Copyright (C) 2020 Marcus A. Mosley All rights reserved
//
// Created by Marcus A. Mosley
// Created on August 2020
// This program calculates the total cost of a pizza

#include <iostream>
#include <iomanip>

int main()  {
    // This function calculates the total cost of a pizza
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 1.13;
    float diameter;
    float sub_total;
    float total;

    // Input
    std::cout << "Enter the diameter of the desired pizza (inch): ";
    std::cin >> diameter;

    // Process
    sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
    total = sub_total * HST;  // HST is set to 1.13

    // Output
    std::cout << "" << std::endl;
    std::cout << "The cost for a " << diameter << " inch pizza is $"
        << std::fixed << std::setprecision(2) << std::setfill('0')
        << total << "." << std::endl;
}
