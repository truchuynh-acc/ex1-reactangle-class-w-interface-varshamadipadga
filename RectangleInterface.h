/** RectangleInterface Code*/
#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

class RectangleInterface
{
public:
	virtual double getLength() const = 0;
  	virtual double getWidth() const = 0;
  	virtual double getArea() const = 0;
};
#endif
