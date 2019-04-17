#include <iostream>
using namespace std;

int main()
{
	int sam[2][3] = { {2,3,4},{8,9,10} };


	for (int row = 0; row < 2; row++) {

		for (int column = 0; column < 3; column++) {
			cout << sam[row][column] << " ";
		}
		cout << endl;
	}
	
	
//	cout << sam[1][2] << endl;

	system("pause");
	return 0;
}