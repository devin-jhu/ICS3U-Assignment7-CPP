// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on June 2022
// The string to list converter

#include <iostream>
#include <iomanip>
#include <string>
#include <list>


int digitList(std::list<int> &numberList, int userNumber) {
    // this function returns the digits

    // process
    while (userNumber) {
        numberList.push_front(userNumber % 10);
        userNumber /= 10;
    }
}


int main() {
    // this function gets user input and returns output
    std::cout << "This program takes a number and returns its digits."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::string userInput;
    int userNumber;
    std::list<int> numberList;

    // input
    while (true) {
        try {
            std::cout << "Enter any number: ";
            std::cin >> userInput;
            userNumber = std::stoi(userInput);
            std::cout << "" << std::endl;

            if (userNumber > 0) {
                // call function
                digitList(numberList, userNumber);

                // printing out each digit from the list
                std::cout << "The digits that make up the number is [";

                for (int digits : numberList) {
                    std::cout << digits;
                    std::cout << ", ";
                }

                std::cout << "]" << std::endl;

                break;

            } else {
                std::cout << "not a number, try again." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "not a number" << std::endl;
        }
    }
    std::cout << "\nDone." << std::endl;
}

