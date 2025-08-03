#include <iostream>
#include <vector>

using namespace std;


int partition (vector<int> &arr, int st, int end) {
    int idx = st -1 , pivot = arr[end]; // choosing the last element as pivot

    for(int i = st; i < end; i++) {
        if(arr[i] <= pivot) { // for descending order use >=
            idx++;
            swap(arr[idx], arr[i]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]); // placing the pivot in its correct position
    return idx; // returning the index of the pivot

}




void quickSort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int pivotIndex = partition(arr, st, end); // partitioning the array
        quickSort(arr, st, pivotIndex - 1); // sorting the left half
        quickSort(arr, pivotIndex + 1, end); // sorting the right half
    }
}



int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
        quickSort(arr, 0, arr.size() - 1); // calling quickSort on the entire array
        cout << "Sorted array: ";   
    for(int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
    cout << endl;
    return 0;
}