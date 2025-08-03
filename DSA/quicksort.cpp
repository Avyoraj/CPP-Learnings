#include <iostream>
#include <algorithm> // for std::swap

using namespace std;

// partition function
int partition(int arr[], int st, int end) {
    int pivot = arr[end]; // choose the last element as pivot
    int i = st - 1; // index of smaller element

    for (int j = st; j < end; j++) {
        if (arr[j] <= pivot) { // for descending order use >=
            i++;
            swap(arr[i], arr[j]); // swap if current element is smaller than or equal to pivot
        }
    }
    swap(arr[i + 1], arr[end]); // place the pivot in the correct position
    return i + 1; // return the index of the pivot
}

// Fix: Add proper types to p5arameters
void quickSort(int arr[], int st, int end) {
    if (st < end) {
        int pividx = partition(arr, st, end);
        quickSort(arr, st, pividx - 1); // sort left half
        quickSort(arr, pividx + 1, end); // sort right half
    }
}



int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n]; // VLA (valid in some compilers like GCC)
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
