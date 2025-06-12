/* unordered map

stores data randomly



no dublicate value for key



*/




#include <iostream>
#include <unordered_map> // for std::unordered_map
#include <string>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    unordered_map<string, int> umap; // Create an unordered map with string keys and int values

    umap.emplace("apple", 5); // Insert key-value pairs into the unordered map
    umap.emplace("banana", 3);
    umap.emplace("orange", 8);
    umap.emplace("grape", 2); // Using emplace to insert a new key-value pair

    for(auto pair : umap) {
        cout << pair.first << ": " << pair.second << endl; // Output all key-value pairs
    }

    return 0;
}


/*


unorderred map vs map


in unordered map 

insert erease count takes ( o (1) ) time complexity on average
while in map it takes ( o (log n) ) time complexity on average


*/