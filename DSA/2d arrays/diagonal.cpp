/*

diagonal.cpp
This code calculates the sum of the diagonals of a 2D array (matrix).


*/



/*
 maxRowsum.cpp

*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int diagonalSum(int mat[][4], int n ) { // o(n)

    
    int sum = 0; 

    // pd : j = i
    // sd : j = n - i - 1

  for(int i = 0 ; i < n ; i++) {

    sum += mat[i][i]; // primary diagonal

    if( i != n - i - 1) { // check to avoid double counting the middle element in odd-sized matrices
        sum += mat[i][n - i - 1]; // secondary diagonal
    }
  }
    return sum;
}


int main(int argc, char const *argv[])
{
    
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };


     int n = 4; // Size of the matrix

    int sum = diagonalSum(matrix, n);
    cout << "Sum of diagonals is: " << sum << endl;


    return 0;
}
