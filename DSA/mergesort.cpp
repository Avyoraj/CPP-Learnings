// C++ program for the implementation of merge sort
#include <iostream>
#include <vector>

using namespace std;

// Merges arrage using recursive merge sort

void merge(vector<int> &arr, int st, int mid , int end ) {   // this function merges two halves of the array


    vector<int> temp;

    int i = st , j = mid+1;

    while(i <= mid && j <= end ) {  // start and end are same 
        if ( arr[i] <= arr[j]) {   // for desending just use >=
            temp.push_back(arr[i]) ;
            i++;
        }   // for left half add
        else {
            temp.push_back(arr[j]);
            j++;
        } // for right half add
    }



    while (i <= mid)
    {
         temp.push_back(arr[i]) ;
        i++;
    } // remaining elements of left half


    while (j <= end)
    {
      temp.push_back(arr[j]);
      j++;
    } // remaining elements of right half


    for(int idx = 0 ; idx <temp.size(); idx++) {
        arr[idx+st] = temp[idx];
    } // copy back to original array from temp array
    
    

}





void mergeSort (vector<int> &arr, int st ,int end ) { // this function sorts the array using merge sort algorithm


    if(st<end) {
        int mid = st + ( end - st)/2 ;


        mergeSort ( arr , st , mid ) ; // left half
        mergeSort ( arr , mid+1 , end) ; // right side


        merge(arr,st,mid,end);
        
    
    }
}





int main(int argc, char const *argv[])
{
    vector <int> arr = {12,31,35,8,32,17};

    mergeSort(arr,0,arr.size()-1); // calling merge sort function

    for(int val : arr) {
        cout << val << " "  ;
    }

    cout << endl;

    return 0;
}
