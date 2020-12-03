// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program checks the number is positive, negative or 0

#include <iostream>


int main() {
    int yourNumber;

    // input
    std::cout << "Enter the number : ";
    std::cin >> yourNumber;
    std::cout << "" << std::endl;

    // process

    if (yourNumber > 0) {
        // output
        std::cout << "The number is positive";
    } else if (yourNumber <0) {
        std::cout << "The number is negative";
    } else {
        std::cout << "The number is 0";
    }
}
