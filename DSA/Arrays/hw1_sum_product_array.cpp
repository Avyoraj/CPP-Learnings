// program for calcuating sum and product of an array


#include <iostream>
using namespace std;

void sumarr (int arr[], int size, int &sum)
{
    sum = 0; // initialize sum to 0
    for (int i = 0; i < size; i++)
    {
        sum += arr[i]; // add each element to sum
    }
}

void productarr (int arr[], int size, int &product)
{
    product = 1; // initialize product to 1
    for (int i = 0; i < size; i++)
    {
        product *= arr[i]; // multiply each element to product
    }
}


int main(int argc, char const *argv[])
{
    int arr[5]; // array of size 5
    int size = 5; // its zero to 4 total 5 elements

    // input the array elements from user
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // input the array elements
    }
    cout << "The elements of array are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // print the array elements
    }
    cout << endl;


    int sum = 0; // variable to store sum of array elements
    int product = 1; // variable to store product of array elements
    sumarr(arr, size, sum); // call function to calculate sum
    productarr(arr, size, product); // call function to calculate product
    
    cout << "The sum of array elements is: " << sum << endl; // print sum
    cout << "The product of array elements is: " << product << endl; // print product


    return 0;
}
