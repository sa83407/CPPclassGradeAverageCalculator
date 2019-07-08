#include <iostream>
#include "gradebook.h"
#include <string>
#include <iomanip> 

using std::string;
using std::cout;
using std::cerr;
using std::cin;



GradeBook::GradeBook()
{
	_courseName = "";
}

GradeBook::GradeBook(string courseName)
{
	setCourseName(courseName);
}

GradeBook::~GradeBook(){}

void GradeBook::setCourseName(string courseName)
{
	if(_courseName.size() <= 25)
	{
		_courseName = courseName;
	}
	else
	{
		_courseName = courseName.substr(0,25);
		cout << "\nERROR! Name is longer than 25"
			<< " characters. It will be "
			<< "shortened.\n";
	}
}

string GradeBook::getCourseName()const
{
	return _courseName;
}

void GradeBook::displayMessage()const
{
	cout << "\nWelcome to the gradebook for: "
		<< getCourseName()
		<< "\n\n";
}
		
void GradeBook::determineClassAverage()const
{
	int total = 0;
	unsigned int gradeCounter = 0;
	int grade = 0;
	
	cout << "\nEnter grade or -1 to quit: ";
	cin >> grade;
	while (grade != -1)
	{
		total += grade;
		gradeCounter++;
		cout << "\nEnter grade or -1 to quit: ";
		cin >> grade;
	}
	
	if(gradeCounter != 0)
	{
		double average = static_cast<double>(total)/gradeCounter;
		
		cout << "\nTotal of all " << gradeCounter << " grades entered : " << total << "\n";
		cout << std::setprecision(2) << std::fixed;
		cout << "Class average is: " << average 
			<< "\n\n";
			
	}
	else
		cout << "\n\n No grades were entered!\n\n";
}
