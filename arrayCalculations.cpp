#include <iostream>
using namespace std;

int main()
{

	int tuna[5] = { 20 ,43 ,543 ,2, 13 };
	int sum = 0;

	for (int x = 0; x < 5; x++) {
		sum += tuna[x];
		cout << sum << endl;
	}

	system("pause");
	return 0;
}