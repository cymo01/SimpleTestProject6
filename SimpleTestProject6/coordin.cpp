//
//   Function definition for the prototypes in coordin.h

#include <iostream>
#include <cmath>
#include <coordin.h>
#define _USE_MATH_DEFINES  //needed to expose the macro definitions for pi constants
#include <math.h>
//
//  convert polar to rectangular coordinates
//
polar rect_to_polar(rect xypos)
{
	polar answer;
	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);  //radians?
	return answer;
}

void show_polar(polar dapos)
{
	const double r2d = 180.0 / M_PI;
	std::cout << "Distance = " << dapos.distance << std::endl;
	std::cout << "Angle = " << dapos.angle*r2d << " degrees" << std::endl;
}

rect polar_to_rect(polar pccord)
{
	const double d2r = M_PI / 180.0;
	rect answer;
	answer.x = pccord.distance*cos(pccord.angle*d2r);
	answer.y = pccord.distance*sin(pccord.angle*d2r);
	return answer;
}
void show_rect(rect xypos)
{
	std::cout << "X-coord = " << xypos.x << std::endl;
	std::cout << "Y-coord = " << xypos.y << std::endl;
}
