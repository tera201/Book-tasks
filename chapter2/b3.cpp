#include <iostream>

using namespace std;

int main() {
	long long s;
	cout << "Enter seconds: ";
	cin >> s;

	const short m = 60;
	const short h = m * m;
    const int d = h * 24;
	
	cout << "This is " << s / d << " days ";
	s %= d;
	cout << s / h << " hours ";
	s %= h;
	cout << s / m << " minutes ";
	s %= m;
	cout << s << " seconds" << endl;

	return 0;
};
