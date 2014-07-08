// This program has three functions: main, first, and second.
#include <iostream>
using namespace std;

/***************************************
*                head                *
* This function displays a head.   *
***************************************/
void head()
{
	cout << "\t ********\n";
	cout << "\t *      *\n";
	cout << "\t * ^  ^ *\n";
	cout << "\t *  @   *\n";
	cout << "\t * ---- *\n";
	cout << "\t *      *\n";
	cout << "\t ********\n";
}

/***************************************
*                body              *
* This function displays a body.   *
***************************************/
void body()
{
	cout << "\t**********\n";
	cout << "\t** **** **\n";
	cout << "\t** **** **\n";
	cout << "\t** **** **\n";
	cout << "\t** **** **\n";
	cout << "\t**********\n";
}

/***************************************
*               legs             *
* This function displays legs.   *
***************************************/
void legs()
{
	cout << "\t **  **\n";
	cout << "\t **  **\n";
	cout << "\t **  **\n";
	cout << "\t **  **\n";
	cout << "\t **  **\n";
	cout << "\t **  **\n";
}
/***************************************
*                 main                *
***************************************/
int main()
{
	cout << "I am starting in function main.\n\n";
	head();	   // Call function first
	body();	// Call function second
	legs();	// Call function second
	cout << "Back in function main again.\n\n";
	cin.get();
	return 0;
}
