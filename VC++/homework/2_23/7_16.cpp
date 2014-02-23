#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Please input a number:";
	cin >> number;

	cout << "The number's ten's place is:" << number / 10 % 10 << endl;

	return 0;
}