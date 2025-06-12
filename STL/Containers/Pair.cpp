// pair in cpp which is a unique STL container that can hold two values of different types.

#include <iostream>
#include <utility> // for std::pair
#include <string>
#include <vector>

using namespace std;

int main( ) {

// pair <string ,int> p = {"shubham", 25}; // Creating a pair with a string and an int
// cout << "Name: " << p.first << ", Age: " << p.second << endl; // Accessing the elements of the pair


//     // pair of pairs

// pair<string, pair<int, double>> p2 = {"Alice", {30, 5.5}}; // Pair of a string and a pair of int and double
// cout << "Name: " << p2.first << ", Age: " << p2.second.first << ", Height: " << p2.second.second << endl; // Accessing the elements of the pair of pairs



// // vector of pairs


// vector<pair<string, int>> vecPairs = {{"John", 28}, {"Doe", 22}, {"Alice", 30}}; // Vector of pairs
// for ( auto pair : vecPairs) {
//     cout << "Name: " << pair.first << ", Age: " << pair.second << endl; // Accessing the elements of each pair in the vector

// }



vector <pair<int,int>> vec = {{1, 2}, {3, 4}, {5, 6}}; // Vector of pairs of integers

vec.push_back({7, 8}); // Adding a new pair to the vector  // insert ( already exists )
vec.emplace_back(9, 10); // Adding another pair using emplace_back (inplace object create)


for(auto p : vec) {
    cout << "First: " << p.first << ", Second: " << p.second << endl; // Accessing the elements of each pair in the vector
}


return 0; // Return 0 to indicate successful execution
}