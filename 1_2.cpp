// Copyright (c) 2019 Izza Khalid All rights reserved.
//
// Created by: Izza Khalid
// Created on: November 2019
// This program prints the numbers from 1000-2000

#include <iostream>

int main() {
    int counter;

    // process & output
    for (counter = 1000; counter < 2001; counter++) {
        std::cout << counter << " " << "";
        if (counter % 5 == 4) {
           std::cout << "" << std::endl; }
    }
}
