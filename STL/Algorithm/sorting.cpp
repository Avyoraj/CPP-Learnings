/*sorting*/



/*



sort(arr, arr + n); // Sorts the array in ascending order
sort(arr, arr + n, greater<int>()); // Sorts the array in descending order

sort(v.begin(), v.end()); // Sorts the vector in ascending order
*/



#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

using namespace std;

bool customComparator( pair<int, int>& a,  pair<int, int>& b) {
    if (a.second <b.second) {
        return true; // Sort by second element in ascending order
    } 

    if (a.second > b.second) {
        return false; // Sort by second element in ascending order
    }

    if( a.first < b.first) {
        return true; // If second elements are equal, sort by first element in ascending order
    }
    else {
        return false; // If second elements are equal, sort by first element in ascending order
    }
}

int main(int argc, char const *argv[])
{
    int arr[5] = {5, 2, 8, 1, 3};

    sort( arr, arr + 5 ); // Sorts the array in ascending order

    cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " ";
    }

    cout << endl;


   vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end(),greater<int>()); // Sorts the vector in desending order
    cout << "\nSorted vector: ";
    for (int i : v) {
        cout << i << " ";
    }

    cout << endl;



    vector<pair<int, int>> vecPairs = {{3, 4}, {1, 2}, {5, 6}};
    sort(vecPairs.begin(), vecPairs.end()); // Sorts the vector of pairs based on the first element of each pair
    cout << "\nSorted vector of pairs: ";
    for(auto p : vecPairs) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;


    // on the basis of second element of pair

    // custom comparator 

    vector<pair<int, int>> vecPairs2 = {{3, 1}, {2, 1}, {7, 1 },{5,2}};
    sort(vecPairs2.begin(), vecPairs2.end(),customComparator); // Sorts the vector of pairs based on the second element of each pair
    cout << "\nSorted vector of pairs: ";
    for(auto p : vecPairs2) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;


    
    return 0;
}
