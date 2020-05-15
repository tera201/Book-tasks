#include<iostream>

using namespace std;

const short ArrSize = 30;

struct CandyBar {
	char box_name[ArrSize];
	float weight;
	int cal;
};

int main() {
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Name: " << snack.box_name << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Сalories: " << snack.cal << endl;
	return 0;
};
