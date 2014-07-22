// This is the IntRange.h file.
// It contains the IntRange class declaration.

#ifndef INTRANGE_H
#define INTRANGE_H

class IntRange
{
  private:
	int input;		// User Input
	int lower;		// Lowest valid integer
	int upper;		// Highest valid integer	
  public:
	IntRange(int, int);
	int getInt();
};

#endif
