#include<iostream>

using namespace std;

int main() {
	
	double sum{};
	double n{-1};
	
	while (n != 0) {
	cout << "Enter number: ";
	cin >> n;
	sum += n;
	n != 0 ? cout << "Sum: " << sum << endl : cout << "End" << endl;
	};
	
	return 0;
};
