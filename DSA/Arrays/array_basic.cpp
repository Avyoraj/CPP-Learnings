// DSA TOPIC 1 Arrays

// basic syntax of array in c++


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int marks [5] = {1, 2, 3, 4, 5}; // array of size 5
    int size  = 5 ; // its zero to 4 total 5 elements

    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " "; // print the array elements
    }
    cout << endl;

    

    // 2nd way to declare array
    int marks2[5]; // array of size 5
    // input the array elements from user
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> marks2[i]; // input the array elements
    }
    cout << "The elements of array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << marks2[i] << " "; // print the array elements
    }
    cout << endl;


    return 0;
}
