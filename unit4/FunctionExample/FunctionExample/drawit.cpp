// This program has three functions: main, first, and second.
#include <iostream>
using namespace std;



int yippie(int a, int b)
{
	int globaldude = 99;//local
	cout << "Here is Global: " << globaldude << endl;
	int total = a + b;
	return total;
}

/***************************************
*                 main                *
***************************************/
int main()
{
	cout << "Here is Global: " << globaldude << endl;
	cout << "I am starting in function main.\n\n";
	int addedamount;
	int num1 = 10;

	int num2 = 30;
	addedamount = yippie(num1, num2);
	cout << "Kevin Says...the AMount is: ";
	cout << addedamount << endl;
	
	cout << "Back in function main again.\n\n";
	cin.get();
	return 0;
}
