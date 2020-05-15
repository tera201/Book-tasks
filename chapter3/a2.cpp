#include<iostream>

using namespace std;

const short ArrSize = 20;

int main() {
	char first_name[ArrSize], last_name[ArrSize];
	cout << "Enter your first name: ";
	cin.getline(first_name, ArrSize);
	cout << "Enter your last name: ";
	cin.getline(last_name, ArrSize);
	cout << "Here's the information in a single string: ";
	cout << last_name << ", " << first_name << endl;
	return 0;
};
