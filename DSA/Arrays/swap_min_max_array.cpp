#include <iostream>
using namespace std;

void swap(int arr[], int minIndex, int maxIndex) {
    // Swap the values at minIndex and maxIndex
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main() {
    int arr[5]; // array of size 5
    int size = 5; // 0 to 4, total 5 elements

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // input the array elements
    }

    cout << "The elements of array are: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // print the array elements
    }
    cout << endl;

    // Find min and max indices
    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            minIndex = i;  // store index of smallest element
        }
        if (arr[i] > largest) {
            largest = arr[i];
            maxIndex = i;  // store index of largest element
        }
    }
    cout << endl;

    cout << "Smallest = " << smallest << " at index " << minIndex << endl;
    cout << "Largest = " << largest << " at index " << maxIndex << endl;
    cout << endl;
    cout << endl;

    // Swap values of smallest and largest elements in the array using their indices
    swap(arr, minIndex, maxIndex);

    cout << "After swapping smallest and largest:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // print the array after swapping values
    }
    cout << endl;
    cout << endl;


    cout << "Smallest = " << arr[minIndex] << " at index " << minIndex << endl;
    cout << "Largest = " << arr[maxIndex] << " at index " << maxIndex << endl;

    return 0;
}
