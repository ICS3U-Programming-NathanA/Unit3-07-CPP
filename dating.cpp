// Copyright (c) 2022 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 18 2022
// This program asks the user for their age it then determines
// if their age is in the likings of the grandparents

#include <iostream>


// declare integer to hold random number

int userNumAsInt;

int main() {
    // declare userNumString as a variable
    std::string userNumString;

    // get the number the user guessed
    std::cout << "Enter your age: ";
    std::cin >> userNumString;

    // If statement to see if the user guessed the correct number
    try {
        userNumAsInt = std::stoi(userNumString);
        if (userNumAsInt >= 25 && userNumAsInt <= 40) {
            // If true then display "You guessed correctly"
            std::cout << "You can date the grandchild \n";

            // Otherwise display " You guessed incorrectly"
        } else {
            std::cout << "You can't date the grandchild \n";
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a number\n";
    // If statement
    }  // If statement to see if the user guessed the correct number
}
