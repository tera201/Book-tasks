#include<iostream>

using namespace std;

const char *month[12] = {"January", "February", "March", "April", "May", "June",
		         "July", "August", "September", "October", "November", 
		         "December"};
int main() {
	int cash[12];
	int sum{};
	cout << "Enter income for each month." << endl;
	for (int i = 0;  i != 12; i++) {
		cout << month[i] << " - ";
		cin >> cash[i];
	};
	for (int i : cash)
		sum += i;
	cout << "Income for the year: " << sum << endl;
	return 0;
};
