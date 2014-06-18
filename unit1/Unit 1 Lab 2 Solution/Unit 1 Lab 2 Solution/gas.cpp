// Unit 1 Lab 2 Programming Challenge...
//	This program calculates how many miles per gallon a vehicle gets.
#include <iostream>
using namespace std;

int main()
{
	// Define and initialize variables
	double gallons = 16.0;         // Gas tank capacity in gallons
	double miles = 350.0;          // Miles driven on one tank
	double milesPerGallon;         // Miles per gallon

	// Calculate miles per gallon
	milesPerGallon = miles / gallons;

	// Display result
	cout << "The car drove " << miles << " miles on "
		<< gallons << " gallons of gas.\n"
		<< "It got " << milesPerGallon << " miles per gallon.\n";
	cout << "EPIC DUDES!!" << endl;
	cin.get();
	return 0;
}
