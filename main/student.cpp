#include <iostream>
#include "student.h"
#include <fstream>
#include <stdlib.h>
//#include"date.cpp"
#include <vector>
#include <sstream>

using namespace std; // when removed i get cout error


void studentMenu() {


	int Schoice;
	system("CLS");
	cout << "= Student Menu						\n";
	cout << "= ---------------------------------\n";
	cout << "= 1. Add Student Record			\n";
	cout << "= 2. Show Student Record			\n";
	cout << "= 3. Search for a Record	        \n";
	cout << "= 4. Show Number of Students	    \n";
	cout << "= 0. exit menu				        \n";
	cout << "====================================\n";
	cout << "Menu choice: ";
	cin >> Schoice;

	switch (Schoice) {

	case 1:
		addStudent();
		break;

	case 2:

		break;

	case 3:
		searchForStudent();
		break;

	case 4:
		numberOfStudent();
		break;
	}

} 


void addStudent() {

	int numb;
	//string name;
	cout << "how many names: ";
	cin >> numb;


	//studentInfor arrayOfStructs; // array of structs
	vector<studentInfor> arrayOfStructs;
	cin.ignore(80, '\n');
	studentInfor student;
	
	for (int i = 0; i < numb; i++)
	{	

		system("CLS");
		cout << "Enter Student Details" << endl;
		cout << "enter student ID: ";
		cin >> student.id;

		cout << "Enter student first Name:";
		//string firstName, lastName;
		cin >> student.firtstName;

		cout << "Enter student Last Name: ";
		cin >> student.lastName;

		//cout << firstName <<" "<<  lastName = student.fullname;

		cout << "Enter student date of birth in dd/mm/yyyy format:";
		cin >> student.dateOfBirth;

		cout << "enter student house number: ";
		cin >> student.houseNumber;

		cout << "Enter Street Name: " ;
		cin >> student.streetName;

		cout << "City: " ;
		cin >> student.city;

		cout << "Enter student Email: ";
		cin >> student.city;
		//cout << "enter birth information:" << endl;
		//StudentBirthday.StudentdateOfBirth();
		

		arrayOfStructs.push_back(student);

		}
		

	system("CLS");
	cout << "Would you Like to save: " << endl << endl;
	for (int i = 0; i < arrayOfStructs.size(); i++)

		
		cout
		<< "Student ID: "	    	<< arrayOfStructs[i].id				<< endl
		<< "Student First Name: "	<< arrayOfStructs[i].firtstName		<< endl
		<< "Student Last Name: "    << arrayOfStructs[i].lastName		<< endl
		<< "Date of Birth: "		<< arrayOfStructs[i].dateOfBirth	<< endl
		<< "Student House Number: " << arrayOfStructs[i].houseNumber	<< endl
		<< "Student Streent Name: " << arrayOfStructs[i].streetName		<< endl
		<< "City:"				    << arrayOfStructs[i].city			<< endl
		<< "Student Email Adress: " << arrayOfStructs[i].email			<< endl;



	char choice;
	cout << "save student: Y to save and n to exit" << endl;
	cin >> choice;
	if (choice == 'y' || choice == 'Y') {
		saveStudentToFile(student);
	}
	else
	{
		cout << ("student Not saved");

	}

	}

void saveStudentToFile(studentInfor student) {

	string line;

	system("CLS");
	ofstream StudentFile;
	StudentFile.open("Student.txt", ios::app);
	cout << "saving  "  << student.firtstName << " " << student.lastName << "  to student File" << endl;
	

	StudentFile << endl
		<< student.id				<< "," << student.firtstName	<< ","
		<< student.lastName			<< "," << student.dateOfBirth	<< ","
		<< student.houseNumber		<< "," << student.streetName	<< ","
		<< student.city				<< "," << student.email << endl;
		
		system("pause");
		studentMenu();

}
	
void searchForStudent() {

	
	string search;
	string line;
	string foundline;
	ifstream studentFile;
	studentFile.open("Student.txt");


	cout << "Please Enter student ID: ";
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
	studentMenu();
}  


void numberOfStudent() {

	system("CLS");
	int l = 0;
	string line;

	ifstream StudentFile;
	StudentFile.open("Student.txt");
		while (getline(StudentFile, line))
			++l;
	cout << "There are " << l << " Students on the database" << endl;
	system("pause");
	studentMenu();
}

