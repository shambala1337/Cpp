#include <iostream>
using namespace std;

int main()
{
//	char c; //1 byte
//	double c; // 8 bytes
//	cout << sizeof(c) << endl; //outputs size of memory the argument consumes


	double sam[10]; // 80 bytes
	cout << sizeof(sam) << endl; //outputs size of memory the argument consumes

	cout << sizeof(sam) / sizeof(sam[0]) << endl; // 10 bytes entire size array divided by one element size

	cout << endl;
	system("pause");
	return 0;
}