#include<iostream>
using namespace std;

int factorialFinder(int x) { //recusive functions ned base cases or 'end points'
	if (x == 1) {			// will print out the factorial of the number passed to the function
		return 1;
	}
	else {
		return x * factorialFinder(x - 1);
	}
}

void sam() {
	cout << "Henlo am pupper" << endl;
//	sam();  this will create an infinite loop
}


int main()
{
//	sam();
//	cout << endl;

	cout << factorialFinder(5) << endl; 

	system("pause");
	return 0;
}