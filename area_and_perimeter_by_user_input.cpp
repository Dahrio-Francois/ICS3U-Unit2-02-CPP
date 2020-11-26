// copyright (c) 2020 Mother Teresa HS All Rights Reserved
//
// Created by: Dahrio Francois
// Created on: November 2020
// this program calculates the area and perimeter of a rectangle
//     with user input

#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm^2" << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm" << std::endl;
}
