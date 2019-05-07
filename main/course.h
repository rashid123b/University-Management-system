#pragma once
//#include <string>
//#include "course."
#include <iostream>
#include"date.h"


using namespace std;

class course {

public:
	//void courseMenu();
	void addCourse();
	void saveStudentToFile();
	//Date sDate();
	Date testdate;
	Date endDate;
	void numberOfCourses();
	void displayallCurses();
	//void search();
	void searchCourse(ifstream &FileSearch);
	void getCourseValue();
	void searchForCourse();
	//void informationMessage(const string& s);
	//friend void enrolStudentOnCourse(studentInfor, course);

private:

	string courseID;
	string courseLevel;
	string courseName;

	//void saveCourse();


};

void courseMenu();
//void addCoursefunc();