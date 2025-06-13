/*
maximum column sum in a 2D array

*/



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int getMaxSum (int mat[][3],int rows, int cols) {

    int maxColSum = INT_MIN;
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += mat[i][j];
        }
        maxColSum = max(maxColSum, colSum);
    }
    return maxColSum;
    
}
int main(int argc, char const *argv[])
{
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int rows = 3;
    int cols = 3;
    int maxSum = getMaxSum(matrix, rows, cols);
    cout << "Maximum row sum is: " << maxSum << endl;
    // Output: Maximum row sum is: 24
    return 0;
}
