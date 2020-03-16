#include <iostream>
#include <array>
/*  Now create a 3 element array and initialize it   */
void arrayTest()
{
	int yamCosts[3] = { 20, 30, 5 };
	int n = sizeof(yamCosts) / sizeof(yamCosts[0]);  //seems like a clunky way of determining number of elements in an array
	int newYamCosts[3] = { 0, 0, 0 };
	for (int a = 0; a < n; a++) {
//		std::cout << a << std::endl;
		newYamCosts[a] = yamCosts[a] + 5;
	}
}