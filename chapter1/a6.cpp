#include <iostream>

using namespace std;

void clock(int h, int m) {
	cout << "Time: " << h << ":" << m;
};

int main() {
	int h, m;

	cout << "Enter the number of hours: ";
	cin >> h;
	cout << "Enter the number of minutes: ";
	cin >> m;

	clock(h, m);

	return 0;
};
