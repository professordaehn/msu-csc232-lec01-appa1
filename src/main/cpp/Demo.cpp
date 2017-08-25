/**
 * CSC232 Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file    Demo.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Entry point for this application. We explore the concepts presented in Appendix A.1.
 */

#include <cstdlib>
#include <iostream>

double getRadius();

int main(int argc, char **argv) {
    // Compute the volume of a sphere of a given radius
    const double PI = 3.14159;
    double radius{getRadius()};

//    std::cout << "Enter the radius of the sphere: ";
//    std::cin >> radius;


    double volume = 4 * PI * radius * radius * radius / 3;
    std::cout << "The volume of a sphere of radius " << radius << " inches is " << volume << " cubic inches.\n";

    return EXIT_SUCCESS;
}

double getRadius() {
    std::cout << "Enter the radius of the sphere: ";
    double r;
    std::cin >> r;
    return r;
}