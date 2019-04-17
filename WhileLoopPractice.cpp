//This program will output the total of 5 user entered numbers 

#include <iostream>
using namespace std;


int main()
{
	int count = 1, number = 0, total = 0;

	while (count <= 5) {
		count++;
		cin >> number;
		total = total + number;
	}

	cout << "The total is " << total << endl;

	system("pause");
	return 0;
}