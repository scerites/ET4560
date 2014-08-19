#include <iostream>

using namespace std;

class Box
{
public:
	// Constructor definition
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		cout << "Constructor called Value of l - lenght is...." << l<<endl;
		cout << "Constructor called Value of b - bredth is...." << b << endl;
		cout << "Constructor called Value of h - height is...." << h<< endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume()
	{
		return length * breadth * height;
	}
	int compare(Box box)
	{
		return this->Volume() > box.Volume();
	}
private:
	double length;     // Length of a box
	double breadth;    // Breadth of a box
	double height;     // Height of a box
};

int main(void)
{
	Box Box1(3.3, 1.2, 1.5);    // Declare box1
	Box Box2(8.5, 6.0, 2.0);    // Declare box2
	Box BoxC;    // Declare boxC or defaults from constructor

	if (Box1.compare(Box2))
	{
		cout << "Box2 is smaller than Box1" << endl;
	}
	else if ((Box2.compare(BoxC)) && (Box1.compare(BoxC)))
	{
		cout << "BoxC is equal to or larger than Box2 and Box1" << endl;
	}
	else 
	{
		cout << "Box2 is equal to or larger than Box1 and BoxC is in the Middle." << endl;
	}
	return 0;
}