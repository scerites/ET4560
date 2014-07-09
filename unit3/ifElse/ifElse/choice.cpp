// This program demonstrates how to safely test a floating-point number
// to see if it is, for all practical purposes, equal to some value.
#include <iostream>
#include <cmath>
using namespace std;//

int main()
{
	int num = 10;//Set num to 10
	switch (num)
	{//What is in the variable
	case 10: 
		cout << "Num is less than 100\n" << endl;
		break;
	case 100:
		cout << "Num is Greater than 100" << endl;
	default:
		cout << "no match" << endl;
	}
			cin.get();
	return 0;
}
