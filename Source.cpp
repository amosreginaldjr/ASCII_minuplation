#include<iostream>
using namespace std;

int main()
{
	char top_left = 201;
	char top_right = 187;
	char bottom_left = 200;
	char bottom_right = 188;
	char center_filler = 205;
	char vertical_filler = 186;

	cout << top_left;
	cout << center_filler << center_filler << center_filler << center_filler << center_filler << center_filler;
	cout << top_right;
	cout << endl;
	cout << vertical_filler << " AMOS " << vertical_filler;
	cout << endl;
	cout << bottom_left;
	cout << center_filler << center_filler << center_filler << center_filler << center_filler << center_filler;
	cout << bottom_right;
	cout << endl;

	/*for (int i = 0; i < 255; i++)
	{
		cout << i <<": " << (char)i << endl << endl;
	}*/

	return 0;
}