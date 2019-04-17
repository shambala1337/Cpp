// unary scope resolution operator

#include <iostream>
using namespace std;

int tuna = 20; // global variable

int main()
{

	int tuna = 69; //local variables
	cout << tuna << endl;
	cout << ::tuna << endl;
	


	system("pause");
	return 0;
}


void sam() {

	cout << tuna << endl;
}