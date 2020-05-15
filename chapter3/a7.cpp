#include<iostream>

using namespace std;

const short ArrSize = 50;

struct PizzaBox {
	char company_name[ArrSize];
	float dia, weight;
	int cal;
};

int main() {
	PizzaBox *pizza = new PizzaBox;
	cout << "Enter it diameter: ";
	cin >> pizza->dia;
	cin.get();
	cout << "Enter company name: ";
	cin.getline(pizza->company_name, ArrSize);
	cout << "Enter weight of it: ";
	cin >> pizza->weight;
	cout << "Company name: " << pizza->company_name << endl;
	cout << " Weight: " << pizza->weight << endl;
	cout << " Diameter: " << pizza->dia << endl;
	delete pizza;
	return 0;
};
