#include<iostream>
#include<array>

using namespace std;

const short n = 3;

int main() {
	array<float, n> times;
	cout << "Enter " << n << " results of the 40 meter race: \n";
	for(int i = 0; i < n; i++)
		cin >> times[i];
	cout << "You wrote " << n << "results: ";
	float sum{};
	for(int i = 0; i < n; i++) {
		cout << times[i] << " ";
		sum += times[i];
	}; 
	cout << "\nAverge result: " << sum / n << endl;
	return 0;
};
