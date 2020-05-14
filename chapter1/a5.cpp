#include <iostream>

using namespace std;

double conver(double c) {
	return c * 63240;
};

int main() {
	double c;

	cout << "Enter the number of light years: ";
	cin >> c;
	cout << c << " light years = " << conver(c) << " astronomical units." << endl;

	return 0;
};
