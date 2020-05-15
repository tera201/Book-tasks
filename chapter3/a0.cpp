#include<iostream>
#include<string>

using namespace std;

int main() {
	string first_name, last_name;
	char grade;
	short age;
	
	cout << "What is your first name? ";
	getline(cin, first_name);
	cout << "What is your last name? ";
	getline(cin, last_name);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl
	cout << "Grade: " << ++grade << "\nAge: " << age;
	return 0;
};
