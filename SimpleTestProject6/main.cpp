#include <refExample.h>
#include <simple.h>
#include <arrayTest.h>
#include <polarRectTest.h>
#include <vectorTest.h>
#include <testStock00.h>

int main()
{
	refExample();     //do some work on pointers and references
	simple();         //call a ridiculously simple function
	arrayTest();      //call a function that works on an array and a for loop
	polarRectTest();  //call to do some simple Cartesian/polar conversions
	vectorTest();     //duplicate the array test function using vectors
	testStock00();    //test of the Stock class
	
	return 0;
}