#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int farg, yard;

	cout <<  "Enter farlongs" << endl;
	cin >> farg;
	yard = 220 * farg;
	cout << "farlongs = " << farg << " in yard = " << yard << endl;

	return 0;
};
