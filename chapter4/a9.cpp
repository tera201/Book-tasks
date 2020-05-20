#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    char *str = new char[n];
    for (int i = 0; i < n; ++i)
        str[i] = '.';
    for (int i = n - 1; i >= 0 ; --i) {
        for (int j = i; j < n; ++j) {
            str[j] = '*';
        }
        cout << str << endl;
    }
    delete [] str;
    return 0;
}