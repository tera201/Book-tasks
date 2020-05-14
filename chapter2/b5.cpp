#include <iostream>

using namespace std;

int main() {
	int k, l;
	cout << "Enter kilometrs: ";
	cin >> k;
	cout << "Enter liters: ";
	cin >> l;
	cout << "Your expense = " << float(l) / k * 100 << " l/km" << endl;

	return 0;
};
