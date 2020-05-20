#include <iostream>
#include <string>

using namespace std;

struct car {
    string brand;
    int production_year{};
};

int main() {
    int n;
    cout << "How many cars to put in the catalog? ";
    cin >> n;
    car *catalog = new car[n];
    for (int i = 0; i < n; ++i) {
        cin.get();
        cout << "Enter brand: ";
        getline(cin,catalog[i].brand);
        cout << "Enter production year: ";
        cin >> catalog[i].production_year;
    }

    cout << "Here is your collection:\n";
    for (int j = 0; j < n; ++j) {
        cout << catalog[j].production_year << " " << catalog[j].brand << endl;
    }
    delete [] catalog;
    return 0;
}

