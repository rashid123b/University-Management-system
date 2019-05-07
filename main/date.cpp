#include <iostream>
#include <string>
#include "date.h"

using namespace std;
/*
void Date::setDay(int d)
{
if (d < 1 && d > 31)
cout << "The day is invalid" << endl;
else
day = d;

}

void Date::setMonth(int m)
{
if (m < 1 && m > 12)
cout << "The month is invalid" << endl;
else
month = m;

}
void Date::setYear(int y)
{
if (y < 2018 && y > 2050)
cout << "The year is invalid" << endl;
else
year = y;

}
*/
/*
void Date::showDate3()
{
string monthName[] = { "January", "February", "March",
"April", "May", "June", "July",
"August", "September", "October",
"November", "December" };
cout << day << "  " << monthName[month - 1] << "  " << year << endl;
}

*/
void Date::getDate() {

	//int Day, Month, Year;
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };

	cout << "Please enter course start date (between 1 - 31) " << endl;
	cin >> day;

	cout << "Please enter course start month (between 1 - 12) " << endl;
	cin >> month;

	cout << "Please enter start year (between 2018 - 2050) " << endl;
	cin >> year;

	cout << day << "  " << monthName[month - 1] << "  " << year << endl;

	//Date newDate(Month, Day, Year);
	//newDate.showDate3();

	//cin.get();
	//cin.get();
	//return 0;
};

void Date::getEndDate() {

	//int Day, Month, Year;
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };

	cout << "Please enter course end date (between 1 - 31) " << endl;
	cin >> day;

	cout << "Please enter course end month (between 1 - 12) " << endl;
	cin >> month;

	cout << "Please enter end year (between 2018 - 2050) " << endl;
	cin >> year;

	cout << day << "  " << monthName[month - 1] << "  " << year << endl;

	//Date newDate(Month, Day, Year);
	//newDate.showDate3();

	//cin.get();
	//cin.get();
	//return 0;
};

/*
void Date::StudentdateOfBirth() {

	//int Day, Month, Year;
	string monthName[] = { "January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October",
		"November", "December" };

	cout << "Please Enter Date of birth - starting with Day: " << endl;
	cout << "Please enter Day of birth (between 1 - 31) " << endl;
	cin >> day;

	cout << "Please enter  month (between 1 - 12) " << endl;
	cin >> month;

	cout << "Please enter year (between 2018 - 2050) " << endl;
	cin >> year;

	cout << day << "  " << monthName[month - 1] << "  " << year << endl;

	//Date newDate(Month, Day, Year);
	//newDate.showDate3();

	//cin.get();
	//cin.get();
	//return 0;
	
};
*/