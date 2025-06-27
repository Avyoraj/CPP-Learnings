/*
2d vector is a vector of vectors, which can be used to create a 2D array-like structure.
*/


/*
 maxRowsum.cpp

*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, char const *argv[])
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << mat[0][0] << endl; // Accessing the first element of the first row

    cout << endl; 

    // rows => mat.size()
    // cols => mat[i].size()  or mat[0].size() // 0 for same number of columns and i used for uneven sized matrix 

    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            cout << mat[i][j] << " "; // Accessing each element in the 2D vector
        }
        cout << endl; // New line after each row
    }
   


    return 0;
}
 