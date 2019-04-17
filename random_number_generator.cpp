#include <iostream>
#include <cstdlib> //needed for rand
#include <ctime> // needed for time
using namespace std;

int main()
{

	srand(67); // seeds a random number to add randomness to results
	srand(time(0)); // counts seconds from 1970 or something 

	for (int x = 1; x < 25; x++) {
		cout << rand() << endl;
	} // 25 random numbers

	cout << endl;

	for (int x = 1; x < 25; x++) {
		cout << 1+ rand()%6 << endl;
	} // 25 random numbers between 1-6

	cout << endl;

	

	system("pause");
	return 0;
}