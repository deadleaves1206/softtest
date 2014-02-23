#include <iostream>
using namespace std;

float Vol(float, float, float);

int main()
{
	float inlength, inwidth, inheight;
	cout << "Please input the length:";
	cin >> inlength;
	cout << "Please input the width:";
	cin >> inwidth;
	cout << "Please input the height:";
	cin >> inheight;

	cout << "The volume is:" 
		 << Vol(inlength, inwidth, inheight) 
		 << endl;
}

float Vol(float length, float width, float height)
{
	return (length * width * height);
}