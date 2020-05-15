#include<iostream>

using namespace std;

const short ArrSize = 30;

struct CandyBar {
	char box_name[ArrSize];
	float weight;
	int cal;
};

int main() {
	short n = 3;
	cout << "Enter numbers types of snaks: ";
	cin >> n;
	CandyBar *snacks = new CandyBar[n];
	for(int i = 0; i < n; i++) {
		cout << "Enter " << i + 1 << " type";
		cout << " Enter snack name: ";
		cin.getline(snacks[i].box_name, ArrSize);
		cout << " Enter weight of it: ";
		cin >> snacks[i].weight;
		cout << " Enter it calories: ";
		cin >> snacks[i].cal;
		cin.get();
	};
	for(int i = 0; i < n; i++) {
		cout << "Name: " << snacks[i].box_name << endl;
		cout << " Weight: " << snacks[i].weight << endl;
		cout << " Сalories: " << snacks[i].cal << endl;
	};
	return 0;
};
