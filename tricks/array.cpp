#include <iostream>

int main() {
    int arr[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    std::cout << arr[10] << std::endl;  // Outputs: 10
    std::cout << 10[arr] << std::endl;  // Outputs: 10 (Same as arr[10])

    return 0;
}



/*
Should You Use 10[arr]?
No, it's bad practice!
Even though it's valid, it's confusing and makes the code harder to read. Always use arr[i] for clarity.



correct syntax 

arr[10] or 10[arr] both are same


what if i used that to access the element of array
arr[10] = 10[arr] = 10

If you try to use int 10 [arr] to access an array, it will result in a syntax error. However, if you meant something like 10[arr], that is actually valid in C and C++ due to pointer arithmetic.

In C and C++, the name of an array is a pointer to the first element of the array. So, when you write 10[arr], it's equivalent to *(10 + arr), which is the same as arr[10]. This is because the addition operator is commutative, so 10[arr] is the same as arr[10].
*/

/*


#include <iostream>

int main() {
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << arr[3] << std::endl;  // Outputs: 3
    std::cout << 3[arr] << std::endl;  // Also outputs: 3

    return 0;
}







*/