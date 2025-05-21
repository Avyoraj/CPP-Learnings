// subarray in cpp 


// A subarray is a contiguous part of an array.
// A subarray can be defined as a contiguous portion of an array.
// For example, in the array [1, 2, 3, 4], the subarrays are:
// [1], [2], [3], [4], [1, 2], [2, 3], [3, 4], [1, 2, 3], [2, 3, 4], and [1, 2, 3, 4].


#include <iostream>       
using namespace std;
int main() {
    // Initialize a vector with some values
    int n = 5 ;
    int arr[5] = {1, 2, 3, 4, 5};
    // Use a for-each loop with pass-by-reference to modify the vector
    
    // Print all subarrays
    for (int st= 0 ; st< n ; st++) {
        for (int en = st ; en < n ; en++) {
            for (int i = st ; i <= en ; i++) {
                cout << arr[i] << " ";
            }
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}