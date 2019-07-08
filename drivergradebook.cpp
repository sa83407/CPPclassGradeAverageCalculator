#include <iostream>
#include "gradebook.h"

int main()
{
	GradeBook myGradeBook("C++ programming course");
	
	myGradeBook.displayMessage();
	myGradeBook.determineClassAverage();
	return 0;
}
