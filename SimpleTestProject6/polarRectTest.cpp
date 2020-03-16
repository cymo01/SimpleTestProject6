#include <coordin.h>
#include <iostream>

void polarRectTest() {
    rect rplace;
    polar pplace;
    std::cout << "Enter the x and y values: ";
    while (std::cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        std::cout << "Next two numbers (q to quit): ";
    }
    // Need this stuff to clear the error condition created entering a q instead of a number with cin
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore();
    }
    std::cout << "Enter the R and theta (deg) values: ";
    while (std::cin >> pplace.distance >> pplace.angle) {
        rplace = polar_to_rect(pplace);
        show_rect(rplace);
        std::cout << "Next two numbers (q to quit): ";
    }
    std::cout << "Bye!" << std::endl;
    return;
}