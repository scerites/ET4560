//Cirlce Goodness of DOOM
#ifndef CIRCLE_H
#define CIRCLE_H
// Circle class declaration
class Circle
{
private:
	double radius;

public:             // Member function prototypes 
	Circle();
	void  setRadius(double);
	double getArea();
};

// Circle member function implementation section 

/********************************************
*              Circle::Circle              *
* This is the constructor. It initializes  *
* the member variable radius to 1.         *
********************************************/
Circle::Circle()
{
	radius = 1;
}

/**********************************************
*            Circle::setRadius               *
* This function validates the radius value   *
* passed to it before assigning it to member *
* variable radius.                           *
*********************************************/
void Circle::setRadius(double r)
{
	if (r >= 0)
		radius = r;
	// else leave it set to its previous value
}

/**********************************************
*               Circle::getArea              *
* This function calculates and returns the   *
* Circle object's area. It does not need any *
* parameters because it can directly access  *
* the member variable radius.                *
**********************************************/
double Circle::getArea()
{
	return 3.14 * pow(radius, 2);
}
#endif