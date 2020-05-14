#include <iostream>

using namespace std;

float conver(float t) {
	return 1.8 * t + 32;
};

int main() {
	float t;

	cout << "Please enter a Celsius value: ";
	cin >> t;
	cout << t << "degrees Celsius is " << conver(t) << " degrees Fahrenheit.";

	return 0;
};
