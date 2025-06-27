// backtracking using recurssion 


#include <iostream>
#include <vector>


using namespace std;



void printSubsets(vector<int>&arr, vector<int>&subset, int index) {
    if (index == arr.size()) {
        // Print the current subset
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }

    // Include the current element
    subset.push_back(arr[index]);
    printSubsets(arr, subset, index + 1);

    // Exclude the current element
    subset.pop_back();
    printSubsets(arr, subset, index + 1);
}


int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> subset;

    cout << "Subsets of the array: " << endl;
    printSubsets(arr, subset, 0);

    return 0;
}