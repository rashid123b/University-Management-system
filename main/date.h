#pragma once
#include <iostream>
#include <string>


using namespace std;

class Date
{
	friend class course;
	friend class student;

private:
	int month, day, year;



public:

	~Date() {}
	void getDate();
	void getEndDate();
	void StudentdateOfBirth();
	//void showDate3();

};

/*
Date::Date()
{
//Initialize variables.
month = 0, day = 0, year = 0;
}

Date::Date(int Day, int Month,  int Year)
{
day = Day;
month = Month;
year = Year;
}

*/
