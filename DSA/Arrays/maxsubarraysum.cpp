// max subarray sum using brute force



#include <iostream>
#include <vector>


using namespace std;

int main () {
    int n = 5;

    int arr[5] = {1, 2, 3, 4, 5};
    int max_sum = INT_MIN;


    // Print all subarrays
    // and find the maximum sum
    for (int st = 0; st < n; st++) {
        for (int en = st; en < n; en++) {
            int sum = 0;
            for (int i = st; i <= en; i++) {
                sum += arr[i];
            }
            max_sum = max(max_sum, sum);
        }
    }

    cout << "Max subarray sum is: " << max_sum << endl;
    return 0;
}