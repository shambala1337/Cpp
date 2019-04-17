#include <iostream>
using namespace std;

void printNumber(int x) {

	cout << "I am printing an integer " << x << endl;

}

void printNumber(float x) {

	cout <<"Now I am printing a float " << x << endl;
}

int main()
{
	int a = 54;
	float b = 12.23;

	printNumber(a);
	printNumber(b);

	system("pause");
	return 0;
}