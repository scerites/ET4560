// Chapter 7 - Programming Challenge 8, Numeric Input Validation Class
// This program tests the IntRange class -- a class created by the
// student to validate that entered integers are within a specified range.

//	File members of this project:
// (These 3 files should be combined into a project.)
//	7_08.cpp (this file)
//	IntRange.h   -- holds the IntRange class declaration
//	IntRange.cpp -- holds the function definitions for the IntRange class

#include <iostream>
#include "IntRange.h"
using namespace std;

int main()
{
	IntRange integerInput(0, 10);
	int value;

	cout << "Enter a value in the range 0 - 10: ";
	value = integerInput.getInt();
	cout << "\nThe value you entered is " << value << endl;
	return 0;
}
