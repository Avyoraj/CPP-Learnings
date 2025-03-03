/*
question : how to check odd or even 

answer : num &1 


why? : checks bit  0th bit of num if it is 1 then it is odd else even

How It Works (Binary Explanation)
Every even number has its last (least significant) bit as 0.
Every odd number has its last bit as 1.
num & 1 checks if the last bit is 1 (odd) or 0 (even).

Example:
num = 5 (binary: 101)
num & 1 = 101 & 001 = 001 (odd)

num = 6 (binary: 110)
num & 1 = 110 & 001 = 000 (even)

This is a fast and efficient way to check if a number is odd or even. 🚀

*/



#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num & 1)  // Checks last bit
        std::cout << num << " is Odd\n";
    else
        std::cout << num << " is Even\n";

    return 0;
}

// Output
// Enter a number: 5
// 5 is Odd