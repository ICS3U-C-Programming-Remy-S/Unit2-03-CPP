// Copyright (c) 2021 Remy Skelton All rights reserved.
//
// Created by: Remy Skelton
// Date: Sep 28, 2023
// This program asks the user for the radius and then
// displays the circumference using tau.

#include <cmath>  // Include cmath for M_PI
#include <iomanip>
#include <iostream>

int main() {
    // Constants
    const float TAU = 2 * M_PI;

    // Variables
    float radius;
    float circumference;

    // Get the radius from the user and display a message
    std::cout << "This program will calculate" << std::endl;
    std::cout << "the circumference of a circle." << std::endl;
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // Calculate the circumference using tau
    circumference = TAU * radius;

    // Display the circumference to the user
    std::cout << "\n";
    std::cout << "The circumference of the circle is ";
    std::cout << "Circumference = " << std::fixed << std::setprecision(2)
              << circumference << " cm" << std::endl;

    return 0;
}
