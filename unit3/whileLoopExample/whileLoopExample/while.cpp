// This program demonstrates a simple while loop.
#include <iostream>
using namespace std;

int main()
{
	int number = 1;

	while (number <= 5)
	{
		cout << "Hello   ";
		cout << number << endl;
		number++;
	}
	cout << "\nThat's all!\n";
	cin.get();
	return 0;
}
