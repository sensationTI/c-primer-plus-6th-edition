#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string brand;
	float weight;
	int calories;
};

int main()
{
	/*
	CandyBar snack =
	{
		"Mocha",
		2.3,
		350
	};

	cout << snack.brand << endl;
	cout << snack.weight << endl;
	cout << snack.calories << endl;

	//array of structure
	CandyBar arr1[3] =
	{
		{"pop", 2.02, 150},
		{"loli", 3.55, 260},
		{"bar", 2.87, 450}
	};
	cout << "The content of the structure array is: " << endl << "Name: ";
	cout << arr1[0].brand << ", " << arr1[1].brand << ", " << arr1[2].brand << endl;
	cout << "Weight: " << endl;
	cout << arr1[0].weight << ", " << arr1[1].weight << ", " << arr1[2].weight << endl;
	cout << "Calories: " << endl;
	cout << arr1[0].calories << ", " << arr1[1].calories << ", " << arr1[2].calories << endl;
	*/

	//using new
	CandyBar * ptr = new CandyBar[3];
	ptr[0] = {"pop", 2.02, 150 };
	ptr[1] = {"loli", 3.55, 260 };
	ptr[2] = {"bar", 2.87, 450 };
	cout << "The content of the structure array is: " << endl << "Name: " << endl;
	cout << ptr[0].brand << ", " << ptr[1].brand << ", " << ptr[2].brand << endl;
	cout << "Weight: " << endl;
	cout << ptr[0].weight << ", " << ptr[1].weight << ", " << ptr[2].weight << endl;
	cout << "Calories: " << endl;
	cout << ptr[0].calories << ", " << ptr[1].calories << ", " << ptr[2].calories << endl;

	return 0;
}
