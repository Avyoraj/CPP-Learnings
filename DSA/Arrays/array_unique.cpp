// unique values in in an array 

// using nested loops


#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to remove the duplicate
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Decrease the size of the array
                j--; // Decrement j to check the new element at index j
            }
        }
    }

    // Print the unique elements
    cout << "Unique elements in the array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeDuplicates(arr, size);

    return 0;
}