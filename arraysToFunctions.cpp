#include <iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
	int sam[3] = { 12,22,32 };
	int jeff[5] = { 15,25,35,45,55 };

	printArray(sam, 3);
	cout << endl;
	printArray(jeff, 2);


system("pause");
return 0;
}



void printArray(int theArray[], int sizeOfArray) {
		for(int x = 0; x < sizeOfArray; x++){
			cout << theArray[x] << endl;
		}

}