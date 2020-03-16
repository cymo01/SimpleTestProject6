//coordin.h -- structure template and function prototypes
#pragma once

struct polar
{
	double distance;    //distance from origin
	double angle;       //direction from origin

};

struct rect
{
	double x;           //horizontal distance from origin
	double y;           //vertical distance from origin
};

//function prototypes
polar rect_to_polar(rect xpos);
void show_polar(polar dapos);

rect polar_to_rect(polar pccord);
void show_rect(rect xypos);

