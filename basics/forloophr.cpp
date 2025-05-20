#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int value1, value2;
    
    // Correct input syntax
    cin >> value1;
    cin >> value2;
    
    // Define array of strings with proper syntax
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    // Loop from value1 to value2 (inclusive)
    for (int i = value1; i <= value2; i++) {
        if (i <= 9) {
            // Print English representation (array is 0-indexed, but our numbers start at 1)
            cout << arr[i-1] << endl;
        } else if (i % 2 == 0) {
            // For even numbers > 9
            cout << "even" << endl;
        } else {
            // For odd numbers > 9
            cout << "odd" << endl;
        }
    }
    
    return 0;
}
