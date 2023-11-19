

// This is a simple C++ program
// It calculates some simple things
#include <arrayTest.h>
#include <polarRectTest.h>
#include <refExample.h>
#include <simple.h>
#include <testStock00.h>
#include <vectorTest.h>
#include <cstdlib>
#include <iostream>

int main() {
    refExample();     // do some work on pointers and references
    simple();         // call a ridiculously simple function
    arrayTest();      // call a function that works on an array and a for loop
    polarRectTest();  // call to do some simple Cartesian/polar conversions
    vectorTest();     // duplicate the array test function using vectors
    testStock00();    // test of the Stock class

    std::cout << "This is a simple message." << std::endl;
    double pi = 3.14159265359;
    double twoPi = 2.0 * pi;
    double threePi = 3.0 * pi;
    std::cout << " pi= " << pi << std::endl;
    std::cout << " 2pi= " << twoPi << std::endl;
    std::cout << " 3pi= " << threePi << std::endl;
    std::cout << " 4pi= " << 4.0 * pi << std::endl;
    return EXIT_SUCCESS;
}