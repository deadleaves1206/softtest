#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a ;
	cout << "Please input a number:";
	cin >> a;

	if (a == 0)
	{
		cout << "This number is 0." << endl;
	}
	else if (a > 0)
	{
		cout << "This number is positive." << endl;
	}
	else
		cout << "This number is negative." << endl;
	return 0;
}