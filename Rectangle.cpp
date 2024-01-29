/**Rectangle.cpp Code*/
#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 1;
	width = 1;
}

bool Rectangle::set( double newLength, double newWidth )
{
	if (newLength > 0 && newWidth > 0)
	{
		length = newLength;
		width = newWidth;
		return true;
   
	}
	else
		return false;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getArea() const
{
	return length * width;
}
