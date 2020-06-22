#include <iostream>
#include <string>
using namespace std;

struct pizza
{
	string company;
	float diameter;
	float weight;
};

int main()
{
	/*
	pizza piz;
	cout << "Enter the pizza company: " << endl;
	getline(cin, piz.company);
	cout << "Enter the pizza diameter: " << endl;
	cin >> piz.diameter;
	cout << "Enter the pizza weight: " << endl;
	cin >> piz.weight;
	cout << "Pizza company: " << piz.company << endl;
	cout << "Pizza diameter: " << piz.diameter << " inches" << endl;
	cout << "Pizza weight: " << piz.weight << " kg" << endl;
	*/

	//using new
	pizza * ptr = new pizza;
	cout << "Enter the pizza diameter: " << endl;
	(cin >> ptr->diameter).get();
	cout << "Enter the pizza companyr: " << endl;
	getline(cin, ptr->company);
	cout << "Enter the pizza weight: " << endl;
	cin >> ptr->weight;
	cout << "Pizza company: " << ptr->company << endl;
	cout << "Pizza diameter: " << ptr->diameter << " inches" << endl;
	cout << "Pizza weight: " << ptr->weight << " kg" << endl;
	delete ptr;
	return 0;
}
