#include <iostream>
using namespace std;

int main()
{
	float x, y;
	cout << "Please input a number:";
	cin >> x;
	y = (float)5 / 9 * (x - 32);
	cout << "y = " << y << endl;
	return 0;
}