// Chapter 7 - Programming Challenge 6, Wrapping Ups and Downs
// This program modifies Programming Challenge 5 so that the word UP moves up
// the screen and the word DOWN moves down the screen, but each word "wraps 
// around" and begins its journey again when it reaches the edge of the screen.
// Students will need to be shown how to use the khbit() function to exit the
// loop when the [Enter] key (any key actually) is pressed.
#include <iostream>
#include <windows.h>          // Needed to set cursor positions
#include <conio.h>            // Needed to use khbit function
using namespace std;

int main()
{
	// Create a HANDLE object and a twp COORD structures for screen cursor positioning
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD upPos   = {35,0},   // "UP" will print in column 35
		  downPos = {42,0};   // "DOWN" will print in column 42

	int downLine = 0;
	int upLine = 23 - downLine;

	cout << "Press [Enter] to stop." << endl;

	do
	{	// Erase any previous labels before displaying new ones
		SetConsoleCursorPosition(screen, upPos);
		cout << "    " << endl; 
		SetConsoleCursorPosition(screen, downPos);
		cout << "    " << endl; 
		
		// Compute new row numbers
		downLine = (downLine + 1) % 24;
		upLine = 23 - downLine;
		
		//Set UP row and print "UP"
		upPos.Y = upLine;
		SetConsoleCursorPosition(screen, upPos);
		cout << "UP" << endl; 

		// Set DOWN row and print "DOWN"
		downPos.Y = downLine; 
		SetConsoleCursorPosition(screen, downPos);
		cout << "DOWN" << endl; 

		// Pause between moves
		Sleep(500);
	} while (!kbhit());      // Continue while no key has yet been pressed
	return 0;
}
