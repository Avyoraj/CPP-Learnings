/*

reverse
next permutation 


swap , min , max ; 




*/


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


int main(int argc, char const *argv[])
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // Reverse the vector

    reverse(vec.begin(), vec.end());

    cout << "Reversed vector: ";
    for ( auto v : vec) {
        cout << v << " ";
    }


    string str = "abcde";

    next_permutation(str.begin(), str.end());
    cout << "\nNext permutation of string: " << str << endl;

    cout << max(10, 20) << endl; // Outputs 20
    cout << min(10, 20) << endl; // Outputs 10
    

    swap(vec[0], vec[1]);
    cout << "After swapping first two elements: ";
    for ( auto v : vec) {
        cout << v << " ";
    }


    // min max from vectror element 

    cout << "\nMax and Min from vector: \n";
    cout << *(max_element(vec.begin(), vec.end())) << endl; // Outputs 5
    cout << *(min_element(vec.begin(), vec.end())) << endl; // Outputs 1


    sort(vec.begin(), vec.end());

    // binary search 
    cout << "\nBinary Search: \n";
    cout<< binary_search(vec.begin(), vec.end(), 3)  << endl; 
   
cout << endl;








    return 0;
}
