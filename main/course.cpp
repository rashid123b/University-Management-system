#include <iostream>
#include "course.h"
#include <fstream>
#include <sstream>
#include <string>

//#include <stdlib.h>
#include <vector>
using namespace std;

void courseMenu() {

	course d;
	int choice;
	do {
		
		system("CLS");
		cout << "= Course Menu					\n";
		cout << "= -----------------------------\n";
		cout << "= 1. Add New Course			\n";
		cout << "= 2. number of courses			\n";
		cout << "= 3. display all courses		\n";
		cout << "= 4. search					\n";
		cout << "= 0. exit menu					\n";
		cout << "================================\n";
		cout << "Choose your option to proceed: ";

		cin >> choice;
	} while ((choice < 0) || (choice > 4));
		switch (choice)
		{

		case 1:
			d.addCourse();
			//cout << ":D" << endl;
			//system("pause");
			break;

		case 2:
			d.numberOfCourses();
			break;

		case 3:
			d.displayallCurses();
			break;

		case 4:
			d.searchForCourse();
			break;
		}
	}


void course::addCourse() {

	course s;

	system("CLS");
	cout << "Enter Course ID: " ;
	cin >> courseID; //s.courseID

	cout << "Course Name: ";
	cin >> courseName; //s.courseName



	cout << "Enter Start date: " ;
	testdate.getDate();

	cout << "ENTER End Date: ";
	endDate.getEndDate();

	getCourseValue();

	char choice;
	cout << "save Course: Yes to save and no to exit";
	cin >> choice;
	if (choice == 'y' || choice == 'Y') {
		saveStudentToFile();
	}
	else
	{
		cout << ("student Not saved");
		system("pause");
		courseMenu();

	}
}

void course::saveStudentToFile() {


	system("CLS");
	ofstream courseFile;
	courseFile.open("Courses.txt", ios::app);
	cout << "saving" << courseName << "to Course file" << endl;
	courseFile << endl << courseID << "," << courseName << ","  << testdate.day << "/" << testdate.month << "/" << testdate.year << "," << endDate.day <<"/"<<endDate.month <<"/" << endDate.year << ","<< courseLevel
 << endl;


	courseFile.close();
	courseMenu();

	}


void course::numberOfCourses() {
	system("CLS");
	int l = 0;
	string line;

	ifstream courseFile;
	courseFile.open("Courses.txt");
	while (getline(courseFile, line))
		++l;
	//l = l / 2;
	cout << "there are " << l << " courses on the database" << endl;
	system("pause");

	//system("pause");
	//courseMenu();

}

void course::displayallCurses() {

	ifstream courseFile("Courses.txt");

	string courseID, CourseName, CourseStart, CourseEnd;
	 

	//string mystring;
	system("CLS");
	string line;
	cout << " Course ID " << " Course Name " << " Course Start Date " << " Course endDate " << endl;
	while (getline(courseFile, line)) {
		stringstream ss(line);
		getline(ss, courseID, ',');
		getline(ss, CourseName, ',');
		getline(ss, CourseStart, ',');
		getline(ss, CourseEnd, ',');

		
			cout << courseID << "	 " << CourseName << "	 " << CourseStart << " 	"<< CourseEnd << "	 "<<  endl;

	}

	system("pause");
	


}


void course::getCourseValue() {

	system("CLS");
	bool incorrectValue = false;
	
	string level;
	cout << "SELECT LEVEL: (C, I, H or M) of the course: \n";
	cout << "Enter A Letter: ";
	//cout << "Invalid credit value. Allowed values are:\n";
	cout << " C for Certificate Level (1st Year)\n";
	cout << " I for Intermediate Level (2nd Year)\n";
	cout << " H for Honours Level (3rd Year)\n";
	cout << " M for Masters Level (Post Graduate)\n";
	
	cin >> level;

	if (level == "c" || level == "C") {
		
		cout << "You Entered " << level << " for First Year " << endl;

	}
	if (level =="i" || level =="I"){

		cout << "You Entered " << level << " for Second Year " << endl;

	}

	if (level == "h" || level == "H") {

		cout << "You Entered " << level << " for third Year " << endl;

	}

	if (level == "M" || level == "m") {

		cout << "You Entered " << level << " for Masters Year (Post Graduate) " << endl;

	}

	level = courseLevel;
}


void course::searchForCourse() {


	string search;
	string line;
	string foundline;
	ifstream studentFile;
	studentFile.open("Courses.txt");


	cout << "Please Enter Course ID: ";
	cin >> search;

	while (!studentFile.eof()) {
		//studentFile >> line;
		istringstream ss(search);
		string t;
		while (getline(studentFile, line)) {
			if (line.find(search) != string::npos)
				cout << line << endl;

		}



	}
	studentFile.close();
	system("pause");
	courseMenu();

}