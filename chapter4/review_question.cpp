//chapter 4 review questions
int main()
{
	//chapter 4 question 1
	char actors[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];
	//question 2: No.
	//question 3:
	int arr1[5] = { 1,3,5,7,9 };
	//question 4:
	int even = arr1[0] + arr1[4];
	//question 5
	float ideas[5] = { 0.1, 0.2, 0.3, 0.4, 0.5 };
	cout << ideas[1] << endl;
	//question 6
	char arrchar[] = "cheeseburger";
	//question 7
	string str1 = "Waldorf Salad";
	//question 8
	struct fish
	{
		string kind;
		int weight;
		float length;
	};
	//question 9
	fish fish1 = { "afish", 2, 1.6 };
	//question 10
	enum Response { No, Yes, Maybe };
	//question 11
	double ted;
	double * ptr = &ted;
	cout << *ptr << endl;
	//question 12
	float * treacle = new float[10];
	float * ptrr = treacle;
	cout << *(ptrr + 9) << endl;
	cout << *(ptrr) << endl;
	//question 13
	unsigned int num;
	cout << "Enter a positive integer number: " << endl;
	cin >> num;
	int * num_arr = new int[num];
	vector<int> vec(num);
	//question 14
	//address of the first element
	//question 15
	fish * some_fish = new fish;
	cin >> some_fish->kind;
	//question 16
	//only print a word
	//question 17
	const int num1 = 10;
	std::vector<string> str_vec(num1);
	std::array<string, num1> str_arr;


	return 0;
}