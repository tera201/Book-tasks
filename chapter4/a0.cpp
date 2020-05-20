#include<iostream>

using namespace std;

int main() {
	int a, b, sum = {};
	cout << "Enter two numbers:" << endl;
	cin >> a >> b;
	cout << "Sum for " << a << " to " << b << ": ";
	while (a <= b) {
		sum += a;
		a++;
	};
	cout << sum << endl;
	return 0;
};
