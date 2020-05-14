#include <iostream>

using namespace std;

int main() {
	long long world, usa;
	cout << "Enter the world's population: ";
	cin >> world;
	cout << "Enter the population of the US: ";
	cin >> usa;
	cout << " The population of the US is " << double(usa) / world << "% of the world population." << endl;

	return 0;
};
