#include <iostream>

using namespace std;

int main() {
	float exp;
	const float mile = 62.4;
	const float gallon = 3.875;

	cout << "Enter your european expense: ";
	cin >> exp;
	cout << "Your USA expense = " << mile / (exp / gallon) <<  endl;

	return 0;
};
