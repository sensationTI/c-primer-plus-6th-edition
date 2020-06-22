#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<float, 3> dash;
	cout << "Enter the first time: " << endl;
	(cin >> dash[0]).get();
	cout << "Enter the second time: " << endl;
	(cin >> dash[1]).get();
	cout << "Enter the third time: " << endl;
	(cin >> dash[2]).get();
	cout << "The first trial takes " << dash[0] << "s" << endl;
	cout << "The second trial takes " << dash[1] << "s" << endl;
	cout << "The third trial takes " << dash[2] << "s" << endl;
	cout << "The average time is " << (dash[0] + dash[1] + dash[2]) / 3 << "s" << endl;
	return 0;
}
