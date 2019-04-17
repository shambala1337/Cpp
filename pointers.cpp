

#include <iostream>
using namespace std;


int main() {

	int fish = 5;
	cout << &fish << endl; // address in memory of fish 
	
	int *fishPointer; //dont need to use a star more than once
	fishPointer = &fish; // pointer is a special type of variable with a memory address as a value
	cout << fishPointer << endl;
	
	cout << endl;
	system("pause");
	return 0;
}