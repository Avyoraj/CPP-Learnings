#include <iostream>
using namespace std;

// program to find sum of all no from 1 to n which are divisible 3

// using for loop

int main(int argc, char const *argv[])
{
    cout  << "Enter a number: ";
    int num;

    cin >> num;

    int sum = 0;

    for (int i=1; i<=num; i++){

        if(i%3==0){
            sum += i;
        }
      
    }
      cout << "Sum of all numbers divisible by 3 from 1 to " << num << " = " << sum << endl;
   

    // using while loop
    cout << " " << endl;
    cout << "Using while loop" << endl;

    cout << "Enter a number: ";
    int num1;
    cin >> num1;

    int sum1=0;
    int i1=1;

    while (i1<=num1){
        if(i1%3==0) {
            sum1 += i1;
        }
        i1++;
    }


    cout << "Sum of all numbers divisible by 3 from 1 to " << num1 << " = " << sum1 << endl;
 
 return 0;

}
