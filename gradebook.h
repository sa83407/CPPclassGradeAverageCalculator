#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>
#include <string>

class GradeBook
{
	public:
		GradeBook();
		GradeBook(std::string);
		~GradeBook();
		void setCourseName(std::string);
		std::string getCourseName()const;
		void displayMessage()const;
		void determineClassAverage()const;
	private:
		std::string _courseName;

};

#endif
