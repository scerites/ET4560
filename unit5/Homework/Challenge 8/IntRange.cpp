// This is the IntRange.cpp file.
// It contains the function definitions for the IntRange class.
#include "IntRange.h"
#include <iostream>
using namespace std;

/****************************************************
 *                 IntRange::IntRange               *
 * This constructor uses the arguments passed to it *
 * to set the lower and upper bounds of the valid   *
 * range for integers.                              *
 ****************************************************/
IntRange::IntRange(int l, int u)
{
	lower = l;
	upper = u;
}

/********************************************************
 *                    IntRange::getInt                  *
 * This function accepts and validates integer inputs.  *
 * Once a valid integer has been entered, it returns it.*
 ********************************************************/
int IntRange::getInt()
{
	for (;;)  // Infinite loop terminated by valid input
	{
		cin >> input;
		if (input < lower || input > upper)
		{
			cout << "Enter a value from " << lower;
			cout << " to " << upper << ": ";
		}
		else
			return input;
	}
}
