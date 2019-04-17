#include <iostream>
using namespace std;

int volume (int length = 0, int width = 0, int height = 0);

int main()
{
	cout << volume(4, 5, 6) << endl;

	system("pause");
	return 0;
}

int volume ( int length, int width, int height)
{
	return length * width * height;
}