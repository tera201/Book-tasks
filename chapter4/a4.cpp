#include<iostream>

using namespace std;

const char *month[12] = {"January", "February", "March", "April", "May", "June",
		         "July", "August", "September", "October", "November", 
		         "December"};
int main() {
	int cash, sum = {};
	cout << "Enter income for each month." << endl;
	for (const char *m : month) {
		cout << m << " - ";
		cin >> cash;
		sum += cash;
	};
	cout << "Income for the year: " << sum << endl;
	return 0;
};
