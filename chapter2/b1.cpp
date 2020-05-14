#include <iostream>

using namespace std;

const float m = 2.2;
const float l = 0.0254;
const int c = 12;

int main() {
	int feet, inch, pounds;
	cout << "Enter your height in full feet: ";
	cin >> feet;
	cout << "Enter your height in full inch without feet: ";
	cin >> inch;
	cout << "Enter yout weight in pounds: ";
	cin >> pounds;

	float meters, kilo;
	meters = (feet * 12 + inch) * l;
	kilo = pounds / m;

	float BMI = kilo / (meters * meters);
	cout << "Your BMI: " << BMI << endl;

	return 0;
};
	
