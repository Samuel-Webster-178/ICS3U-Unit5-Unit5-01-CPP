// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// This program converts Celcius to fahrenheit using functions


#include <iostream>


void convert() {
    // I calculate circumference of a circle
    float fltCelcius;
    float fahrenheit;
    std::string strCelcius;


    // input
    std::cout << "Enter a temperature (°C): ";
    std::cin >> strCelcius;

    // process & output
    try {
        fltCelcius = std::stoi(strCelcius);
        fahrenheit = 32 + (fltCelcius * 9 / 5);
        std::cout << fltCelcius << "°C is equal to ";
        std::cout << fahrenheit << "°F." << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Please enter a valid temperature" << std::endl;
    }

    // output
    std::cout << "\nDone." << std::endl;
}

main() {
    convert();
}
