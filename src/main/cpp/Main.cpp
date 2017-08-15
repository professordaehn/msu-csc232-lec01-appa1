/**
 * CSC232 Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file    Main.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Frank M. Carrano
 *          Timothy M. Henry
 * @brief   Entry point for this application; a modified version of Figure A-1, page 715 accommodated for lecture 1.
 */

#include <cstdlib>
#include <iostream>

int main() {
    // Computes the volume of a sphere of a given radius
    const double PI = 3.14159;
    double radius;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    double volume = 4 * PI * radius * radius * radius / 3;
    std::cout << "The volume of a sphere of radius " << radius << " inches is " << volume << " cubic inches.\n";

    return EXIT_SUCCESS;
}