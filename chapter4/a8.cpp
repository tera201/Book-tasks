#include <iostream>
#include <string>

using namespace std;

int main() {
    string word{}, end_word{"done"};
    int n{};
    cout << "Enter words (to exit - enter 'done'):\n";
    cin >> word;
    while (word != end_word) {
        n++;
        cin >> word;
    }
    cout << "You entered " << n << " words." << endl;
    return 0;
}

