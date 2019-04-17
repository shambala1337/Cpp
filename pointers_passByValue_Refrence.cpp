#include <iostream>
using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main() {

	//cout << sqrt(81) << endl;
	//pass by value
		//pass a copy of the variable into the function, this does not change the value of the origional variable

	//pass by reference
		//pass in the variables address, gives function direct access to original variable value
			//less stress on cpu, but obviously dangerous

	int sam = 13;
	int jeff = 13;


	cout << "Before" << endl;
	cout << "Sam: " << sam << endl;
	cout << "Jeff: " << jeff << endl;
	cout << endl;

	passByValue(sam);
	passByReference(&jeff);  //& is for pointer variables
							//* is for memory addresses
	
	cout << "After" << endl;
	cout << "Sam: " << sam << endl;
	cout << "Jeff: " << jeff << endl;

	cout << endl;
	system("pause");
	return 0;
}


void passByValue(int x) {
	x = 99;
}

void passByReference(int *x) { //needs a pointer argunemt
	*x = 66;
}