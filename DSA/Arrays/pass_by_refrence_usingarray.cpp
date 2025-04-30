// pass by reference using array

#include <iostream>
using namespace std;


void change(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = 2*arr[i]; // double each element in the array
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    change(arr, 5); // pass the array to the function
    cout << "Array after modification: In main function" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // print the modified array
    }

    cout << endl;

// basically we are passing the address of the first element of the array to the function
// and the function modifies the original array using that address.

// in pass by value, a copy of the array is passed to the function, and any modifications made to the array inside the function do not affect the original array in the main function.
// in pass by reference, the function receives a reference to the original array, allowing it to modify the original array directly.


    return 0;
}
