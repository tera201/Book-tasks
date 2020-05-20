#include<iostream>

using namespace std;

void daphne(double first_cash, double *current_cash, float percent);
void kleo(double *current_cash, float percent);

int main() {
	double *daphne_cash = new double;
	double *kleo_cash = new double;
	cout << "Enter Daphne cash: ";
	cin >> *daphne_cash;
	cout << "Enter Kleo cash: ";
	cin >> *kleo_cash;
	double daphne_first = *daphne_cash;
	int years{};
	do {
		daphne(daphne_first, daphne_cash, 10);
		kleo(kleo_cash, 5);
		years++;
	} while (*kleo_cash < *daphne_cash);
	cout << years << " years later:" << endl;
	cout << " Daphne: " << *daphne_cash << endl;
	cout << " Kleo: " << *kleo_cash << endl;
	delete daphne_cash, kleo_cash;
	return 0;
};

void daphne(double first_cash, double *current_cash, float percent) {
	*current_cash += first_cash * (percent / 100);
};

void kleo(double *current_cash, float percent) {
	*current_cash *= 1 + percent / 100;
};
