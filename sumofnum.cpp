#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int num;

    cout << "Enter a number for loops: ";
    cin >> num;

    // Sum using while loop
    int sum = 0;
    int i = 0;
    while (i <= num) {
        sum += i;
        i++;
    }
    cout << "Sum using while loop = " << sum << endl;

    // Sum using for loop
    int sum1 = 0;
    for (int i = 0; i <= num; i++) {
        sum1 += i;
    }
    cout << "Sum using for loop = " << sum1 << endl;
    cout << " " << endl;

    // Demonstrating break and continue in for loop
    int num1;
    cout << "Enter a number for loops with break/continue: ";
    cin >> num1;

    cout << "Using continue statement:" << endl;
    for (int i = 0; i <= num1; i++) {
        if (i == 3) {
            continue;
        }
        cout << i << " ";
    }
    cout << "\nLoop ends  3 was skipped here ! " << endl;

        cout << " " << endl;


    cout << "Using break statement:" << endl;
    for (int i = 0; i <= num1; i++) {
        if (i == 3) {
            break;
        }
        cout << i << " ";
    }
    cout << "\nLoop ends when reaching 3" << endl;

        cout << " " << endl;


    // Sum of odd and even numbers
    cout << "Sum of odd and even numbers" << endl;
    cout << "Using while loop" << endl;

    int num2 = 10;
    int evenSum = 0;
    int oddSum = 0;

    for (int i = 0; i <= num2; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }
    }
    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

        cout << " " << endl;


    // Sum of odd and even numbers using while loop
    cout << "Using while loop" << endl;
    int num3 = 10;
    int evenSum1 = 0;
    int oddSum1 = 0;
    int i1 = 0;

    while (i1 <= num3) {
        if (i1 % 2 == 0) {
            evenSum1 += i1;
        } else {
            oddSum1 += i1;
        }
        i1++;
    }
    cout << "Sum of even numbers = " << evenSum1 << endl;
    cout << "Sum of odd numbers = " << oddSum1 << endl;

    return 0;
}









// in while we only can have one condition 
// in for we can have multiple conditions
// for is more readable than while loop
// for loop is more compact than while loop


// in continue the nu,ber is skipped and the loop continues
// in break the loop is terminated and the loop is exited