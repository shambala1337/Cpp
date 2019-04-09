#include <iostream>
using namespace std;

void printSomething();


int main()

{
	printSomething; // program will run but not execute function
	printSomething(); // will run function
	
	cout << "" << endl;
	
	system("pause");
	return 0;
}



// return type, name, parameters
void printSomething() { /* function */
	cout << "henlo is banan" << endl;
}

/**************************************/
/* 21-24 can also be put above in main instead of the void printSomething(); that is currently there */