/* count set bits */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
    int n = 15;

    long int n2 =15;

    long long int n3 =15;

    // Count the number of set bits in an integer
    cout << __builtin_popcount(n) << endl; // Outputs 4, for int
    cout << __builtin_popcountl(n2) << endl; // Outputs 4, for long int
    cout << __builtin_popcountll(n3) << endl; // Outputs 4, for long long int
    
    return 0;
}
