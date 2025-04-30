// find the index of smallest and largest number from array using loop



#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{


    int nums [] = {5,15,22,1,-5,24} ;
    int size = 6 ;

    int smallest = INT_MAX;
    int largest = INT_MIN; // initialize largest to the smallest possible integer value

    int smallestIndex = -1; // Initialize to -1 to indicate not found
    int largestIndex = -1; // Initialize to -1 to indicate not found

    for (int i=0 ; i<size;i++){
        smallest = min(smallest, nums[i]);
        largest = max(largest, nums[i]);  // order dont matter
      }     // how this prints the actual value of smallest and largest number
        // we need index of smallest and largest numb

    for (int i=0 ; i<size;i++){
        if (nums[i] == smallest) {
            smallestIndex = i; // Store the index of the smallest number
        }
        if (nums[i] == largest) {
            largestIndex = i; // Store the index of the largest number
        }
    }

    
    cout << "Smallest= " << smallest << endl;
    cout << "Smallest(index)= " << smallestIndex << endl;
    
    cout << endl;

    cout << "Largest= " << largest << endl;
    cout << "largest(index)= " << largestIndex << endl;
    return 0;
}
