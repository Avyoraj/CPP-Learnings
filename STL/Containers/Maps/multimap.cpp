/*

in multimap 
we can have multiple values for a key
insert erase


*/



#include <iostream>
#include <map>  // for std::multimap
#include <string>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    // Create a multimap with string keys and int values


    multimap<string, int> m;
    // Insert key-value pairs into the multimap
    m.emplace("apple", 5);
    m.emplace("apple", 10); // Multiple values for the same key
    m.emplace("banana", 3);
    m.emplace("orange", 8);

   // m.erase("apple"); // Removing an element by key

   m.erase(m.find("apple")); // Removing one instance of "apple"

    for ( auto pair : m) {
        cout << pair.first << ": " << pair.second << endl; // Output all key-value pairs
    }
    return 0;
}
