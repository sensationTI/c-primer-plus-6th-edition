#include <iostream>
#include <string>
using namespace std;

int main()
{
	//char array implementation
	char grade;
	int age;
	char first[20];
	char last[20];
	cout << "What is your first name? " << endl;
	cin.getline(first, 20);
	cout << "What is your last name? " << endl;
	cin.getline(last, 20);
	cout << "What letter grade do you deserve? " << endl;
	cin >> grade;
	cout << "What is your age? " << endl;
	cin >> age;
	cout << "Name: " << last << ", " << first << endl;
	cout << "Grade: " << char(grade + 1) << endl;
	cout << "Age: " << age << endl;

	//string class implementation
	//string first, last;
	/*
	char grade;
	int age;
	cout << "What is your first name? " << endl;
	getline(cin, first);
	cout << "What is your last name? " << endl;
	getline(cin, last);
	cout << "What letter grade do you deserve? " << endl;
	cin >> grade;
	cout << "What is your age? " << endl;
	cin >> age;
	cout << "Name: " << last << ", " << first << endl;
	cout << "Grade: " << char(grade+1) << endl;
	cout << "Age: " << age << endl;*/
	return 0;
}
