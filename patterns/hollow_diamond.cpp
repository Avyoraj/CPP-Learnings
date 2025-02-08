
// hollow pattern 

#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Top half of the diamond
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // First star
        cout << "*";

        // Inner spaces
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Second star
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // First star
        cout << "*";

        // Inner spaces
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            // Second star
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}