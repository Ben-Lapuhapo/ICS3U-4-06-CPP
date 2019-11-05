// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Ben Lapuhapo
// Created on: Nov 2019
// This program uses a nested loop

#include <iostream>
#include <cstdlib>
#include <string>


int main() {
    int red = 0;
    int green = 0;
    int blue = 0;


    // process
    for (red = 0; red < 256; red++) {
        for (green = 0; green < 256; green++) {
            for (blue = 0; blue < 256; blue++) {
                // output
                std::cout << "RGB Value:(" << red << "," << green << "," << blue
                          << ")" << std::endl;
            }
        }
    }
}
