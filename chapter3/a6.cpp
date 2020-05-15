#include<iostream>

using namespace std;

const short ArrSize = 50;

struct PizzaBox {
	char company_name[ArrSize];
	float dia, weight;
	int cal;
};

int main() {
	PizzaBox pizza;
	cout << "Enter company name: ";
	cin.getline(pizza.company_name, ArrSize);
	cout << "Enter weight of it: ";
	cin >> pizza.weight;
	cout << "Enter it diameter: ";
	cin >> pizza.dia;
	cout << "Company name: " << pizza.company_name << endl;
	cout << " Weight: " << pizza.weight << endl;
	cout << " Diameter: " << pizza.dia << endl;
	return 0;
};
