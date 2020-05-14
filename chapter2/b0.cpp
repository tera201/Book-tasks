#include <iostream>

using namespace std;

int main() {
	int feet, inch;

	cout << "Enter your height in inch: ";
	cin >> inch;
	feet = inch / 12;
	inch /= 12;
	cout << "Your height " << feet << " feet and " << inch << " inch" << endl;

	return 0;
};
