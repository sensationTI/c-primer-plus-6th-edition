#include <iostream>
#include <string>
using namespace std;

int main()
{
	//char array implementation
	/*
	char first[20];
	char last[20];
	char full_name[40];
	cout << "Enter your first name: " << endl;
	cin.getline(first, 20);
	cout << "Enter your last name: " << endl;
	cin.getline(last, 20);
	strcpy_s(full_name, last);
	strcat_s(full_name, ", ");
	strcat_s(full_name, first);
	cout << "Here's the information in a single string: ";
	cout << full_name << endl;
	*/
	//string class implementation
	string first, last, full_name;
	cout << "Enter your first name: " << endl;
	getline(cin, first);
	cout << "Enter your last name: " << endl;
	getline(cin, last);
	full_name = last + ", " + first;
	cout << "Here's the information in a single string: ";
	cout << full_name << endl;
	return 0;
}
