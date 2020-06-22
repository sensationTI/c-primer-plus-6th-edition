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
	CandyBar snack = 
	{
		"Mocha", 
		2.3,
		350 
	};

	cout << snack << endl;
	return 0;
}
