// array reverse using two pointer approach

#include <iostream>
using namespace std;




void reverseArray(int arr[], int size) {
    int start =0 , end = size-1; // start and end pointers
    while (start < end) {
        swap(arr[start], arr[end]); // swap the elements at start and end pointers
        start++; // move the start pointer to the right
        end--; // move the end pointer to the left
    }
}


int main(int argc, char const *argv[])
{

    int arr[]= {4,2,7,8,1,2,5,3};
    int size = sizeof(arr) / sizeof(arr[0]); // calculate the size of the array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // print the original array
    }


    cout << endl;

    reverseArray(arr, size); // call the function to reverse the array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // print the reversed array
    }
    cout << endl;
    // 4 2 7 8 1 2 5 3
    
    return 0;
}
