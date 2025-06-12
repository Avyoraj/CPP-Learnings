/*

map we can visualised it as a table 


with key and value pair


key is unique and value can be duplicate


map <string, int> m; // map with string as key and int as value
m[key] = value; // insert or update value for the given key


insert, emplace erase find size empty erase 



*/





#include <iostream>
#include <map>  // for std::map
#include <string>               
#include <vector>
using namespace std;


int main() {
    // Create a map with string keys and int values
    map<string, int> m;

    // Insert key-value pairs into the map
    m["apple"] = 5;
    m["banana"] = 3;
    m["orange"] = 8;

    m.emplace("grape", 2); // Using emplace to insert a new key-value pair

    // Accessing elements in the map
    cout << "apple: " << m["apple"] << endl;   // Output: apple: 5
    cout << "banana: " << m["banana"] << endl; // Output: banana: 3

    cout << endl;


    m.erase("banana"); // Removing an element by key

    // Iterating through the map
    for ( auto pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "count: " << m.count("orange") << endl; // Output: count 1

    /*
    by default map is sorted by key in ascending order
    lexicographical order for strings
    If you want to sort by value, you can use a vector of pairs and sort it.    */



    if (m.find("grape") != m.end()) { // Check if a key exists
        cout << "grape found with value: " << m["grape"] << endl; // Output: grape found with value: 2
    } else {
        cout << "grape not found" << endl;
    }

    
    return 0;
}