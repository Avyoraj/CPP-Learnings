// linear search in array
// it pritns index

#include <iostream>
using namespace std;    


int linearSearch(int arr[], int size,int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) { // check if the current element is equal to the target
            return i; 
        }
    }
    return -1; // return -1 if the element is not found
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // calculate the size of the array
    int target = 4; // element to search for

    cout << "Array: ";
    cout << linearSearch(arr, size,target) << endl; // print the array

    return 0;


}
