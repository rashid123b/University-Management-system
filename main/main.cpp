#include <iostream>
#include "student.h"
#include "course.h"

using namespace std;

int main() {

	//studentMenu s;
	string pass = "eion";
	string pass2 ="rashid";
	//string w1 = "Rashid";
	string input;
	//////////////
	cout << "=	 Welcome To Unversity	\n";
	cout << "=	  Management System		\n";
	cout << "= -----------------------------\n";
	cout << "=Please Enter Your Password: ";
	cin >> input;
	
	


	////////////////////
	//cout << "Enter password to Continue: ";
	//cin >> input;

	if (input == pass || input == pass2)
	{
	

		///////
		system("CLS");
		cout << "WELCOME" << endl;
		int choice;
		cout << "=================================\n";
		cout << "= Main Menu =\n";
		cout << "= ------------ =\n";
		cout << "\n";
		cout << "= 1. Student Menu =\n";
		cout << "\n";
		cout << "= 2. Course Menu =\n";
		cout << "\n";
		cout << "= 0. exit application =\n";
		cout << "=================================\n";
		cin >> choice;

		switch (choice) {

		case 1:
			studentMenu();
			//void student();
			break;

		case 2:
			courseMenu();
			break;


		case 3:
			break;


		}
	}//////

	else
	{
		system("CLS");
		cout << "=========WRONG PASSWORD==============" << endl;
		system("pause");
		system("CLS");
		system("pause");
		main();
	}

	return 0;
}

