// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program uses a continue statement

#include <iostream>
#include <string>

main() {
    // This function uses a continue statement
    std::string userInputString;
    std::string loopCounterString;
    int sumOfNum = 0;
    int userInput;
    int loopCounter;

    // input
    std::cout << "Welcome to the positive number calculator!\n";
    std::cout << "How many numbers would like to add together?: ";
    std::cin >> loopCounterString;
    std::cout << " \n";

    // process & output
    try {
        loopCounter = std::stoi(loopCounterString);
        if (loopCounter < 0) {
            std::cout << "Input a positive integer please." << std::endl;
        } else {
            while (loopCounter > 0) {
                std::cout << "Enter a number to add: ";
                std::cin >> userInputString;
                try {
                    userInput = std::stoi(userInputString);
                    loopCounter = loopCounter - 1;

                    if (userInput < 0) {
                        continue;
                    }
                    sumOfNum = sumOfNum + userInput;
                } catch (std::invalid_argument) {
                    std::cout << "Wrong input. Try again." << std::endl;
                }
            }

            std::cout << " \n";
            std::cout << "Sum of the positive numbers is " << sumOfNum << "."
                      << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Wrong input. Try again." << std::endl;
    }
}
