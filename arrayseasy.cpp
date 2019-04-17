#include <iostream>
using namespace std;

int main()
{
	int sam[9]; //creates a nine element array
	cout << "Element - Value" << endl;

	for (int x = 0; x < 9; x++) {
		sam[x] = 99; // assigns every values in aray to 99
	
		cout << x << "    -----    " << sam[x] << endl;
	}
	system("pause");
	return 0;
}