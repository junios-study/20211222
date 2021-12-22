#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World" << endl;

	int Height = 0;
	int Base = 0;

	cin >> Height;
	cin >> Base;

	float Area = 0.0f;

	Area = (static_cast<float>(Height) *
		static_cast<float>(Base)) / 2.0f;

	cout << Area << endl;

	//집에서 한거


	return 0;
}