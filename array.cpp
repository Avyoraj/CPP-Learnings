// array in cpp

#include <iostream>
using namespace std;


int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;

    cout << "Size of array = " << sizeof(arr) << endl;
    cout << "Size of int = " << sizeof(int) << endl;

    cout  << arr << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}