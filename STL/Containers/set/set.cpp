/*
set in cpp



set<int> s ;

insert emplace count erase find size empty erase


unique values only 

soreted ordered set



time complexity for insert, emplace, erase, find, count is O(log n) on average

*/




#include <iostream>
#include <set>  // for std::set

using namespace std; 


int main(int argc, char const *argv[])
{
    set<int> s;

    s.insert(10); // Insert elements into the set
    s.insert(20);
    s.insert(30);

    s.insert(40);
    s.insert(50);
    
    
    s.insert(1);
    s.insert(2);
    s.insert(3);

    s.insert(2); // Duplicate value, will not be added again


    cout << "Set elements: ";
    cout << s.size() << endl; // Output the size of the set

    for ( auto val : s) {
        cout << val << " "; // Output all elements in the set
    }
    cout << endl;


    cout << "lower bound of 20: " << *s.lower_bound(20) << endl; // Output the lower bound of 20
    cout << "upper bound of 20: " << *s.upper_bound(20) << endl; // Output the upper bound of 20

    cout << endl;


    return 0;
}

