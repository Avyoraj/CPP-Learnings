// for each loop in c++ with pass by reference

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a vector with some values
    vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Use a for-each loop with pass-by-reference to modify the vector
    for (int &num : numbers) {
        num *= 2; // Double each element
    }
    
    // Print the modified vector
    for (int num : numbers) {
        cout << num << " ";
    }
    
    cout << endl;
    
    return 0;
}