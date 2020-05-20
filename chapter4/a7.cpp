#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char word[100]{}, end_word[5]{"done"};
    int n{};
    cout << "Enter words (to exit - enter 'done'):\n";
    cin >> word;
    while (strcmp(word, end_word) != 0) {
        n++;
        cin >> word;
    }
    cout << "You entered " << n << " words." << endl;
    return 0;
}

