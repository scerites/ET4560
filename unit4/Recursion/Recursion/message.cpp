// This program demonstrates a simple recursive function.
#include <iostream>
using namespace std;



int main()
{
	char choice;
	do{
		cout << "Enter Menu Selection\n";
		cout << "Presssss z to exit yo..\n";
		cin >> choice;
		cin.ignore();
		switch (choice)
		{
		case '1':
			cout << "You picked 1 dude\n";
			break;
		case '2':
			cout << "You pickeeedd 2\n";
			break;
		default:
			cout << "pick 1 or 2 or die.\n";
		}


	} while (choice!='z');
	cin.get();
	return 0;
}

