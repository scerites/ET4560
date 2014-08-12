// This program illustrates exception handling.
#include <iostream> 
using namespace std;

// Function prototype
double divide(double, double);

int main()
{
	int num1, num2;
	double quotient;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	try
	{
		quotient = divide(num1, num2);
		cout << "The quotient is " << quotient << endl;
	}
	catch (char *exceptionString)
	{
		cout << exceptionString;
	}
	cout << "End of the program.\n";
	return 0;
}

double divide(double numerator, double denominator)
{
	if (denominator == 0)
		throw "ERROR: Cannot divide by zero.\n";
	else
		return numerator / denominator;
}