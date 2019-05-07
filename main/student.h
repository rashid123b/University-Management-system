#pragma once
#include"date.h"


struct  studentInfor {
	//friend void enrolStudentOnCourse(studentInfor, course);
	char id[10];
	char dateOfBirth[11];
	char firtstName[15];
	char lastName[15];
	char houseNumber[5];
	char streetName[25];
	char city[25];
	char email[25];
	
};
void addStudent();
void studentMenu();
void saveStudentToFile(studentInfor student);
void searchForStudent();
void numberOfStudent();
void numbeOfStudent(int &n);
