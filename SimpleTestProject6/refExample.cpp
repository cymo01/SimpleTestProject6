//
// A function that works with references and pointers
//
#include <iostream>
#include <string>

void refExample()
{
	int iVal1 = 1024;
	int iVal2 = 2048;
	const int arSize = 20;
	std::string cVal1 = "This is a string.";
	int *refVal1 = &iVal1;
	int *refVal2 = &iVal2;
	int iVal3 = iVal1 + iVal2;
	std::cout << "The result iVal3 is " << iVal3 << std::endl;
	iVal3 += 2;
	std::cout << "The result iVal3 is " << iVal3 << std::endl;
	int sum = *refVal1 + *refVal2;
	std::cout << "The result sum is " << sum << std::endl;
	std::cout << cVal1 << std::endl;
	return;
}