#include <iostream>

using namespace std;

int main() {
	const float k = 60;
        
	cout << "Enter latitude in degrees, minutes and seconds" << endl;
	cout << "Enter degrees: ";

	int deg, m, s;
	cin >> deg;
	cout << "Enter minutes: ";
	cin >> m;
	cout << "Enter seconds: ";
	cin >> s;
	cout << "Latitude in dec = " << deg + (m + s / k) / k << endl;

	return 0;
};

