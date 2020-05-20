#include<iostream>

using namespace std;

const char *month[12] = {"January", "February", "March", "April", "May", "June",
		         "July", "August", "September", "October", "November", 
		         "December"};
int main() {
	int cash[3][12];
	int sum{};
	cout << "Enter income for each month." << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << " year: " << endl;
		for (int j = 0;  j < 12; j++) {
			cout << "\t" << month[j] << " - ";
			cin >> cash[i][j];
		};
	};
	for (int *months : cash)
		for (int i = 0; i < 12; i++)
			sum += months[i];
	cout << "Income for three years: " << sum << endl;
	return 0;
};
