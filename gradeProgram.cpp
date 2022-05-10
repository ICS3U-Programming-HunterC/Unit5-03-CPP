// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: May 9, 2022
// This program gets your mark in number level and finds the middle
// percentage

#include <iostream>
#include <string>

std::string CalcMark(std::string mark) {
    // check what the middle mark is
    if (mark == "1-") {
        return "51%";
    } else if (mark == "1") {
        return "55%";
    } else if (mark == "1+") {
        return "58%";
    } else if (mark == "2-") {
        return "61%";
    } else if (mark == "2") {
        return "65%";
    } else if (mark == "2+") {
        return "68%";
    } else if (mark == "3-") {
        return "71%";
    } else if (mark == "3") {
        return "75%";
    } else if (mark == "3+") {
        return "78%";
    } else if (mark == "4-") {
        return "83%";
    } else if (mark == "4") {
        return "91%";
    } else if (mark == "4+") {
        return "98%";
    } else {
        return "1-";
    }
}

int main() {
    // declare variables
    std::string markAsString, calculatedMark;

    // get the user input
    std::cout << "Enter your mark (ex. 4-): ";
    std::cin >> markAsString;

    // call the function
    calculatedMark = CalcMark(markAsString);

    // display calculated mark
    std::cout << "Level " << markAsString << " has a middle percentage of "
<< calculatedMark << "\n";
}
