// program for the factorial of a number n


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // using for loop


    int num;
    cout << "Enter a number: ";
    cin >> num;
    int fact=1 ;

    for (int i=1 ;i<=num; i++){
    fact*= i ;
    }

    cout << "Factorial of " << num << " = " << fact << endl;



    // using while loop

    cout << " " << endl;

    cout << "Using while loop" << endl;

    int num1;
    cout << "Enter a number: ";
    cin >> num1;
    int fact1=1;

   int i1=1;

    while (i1 <= num1) {
        fact1 *= i1;
        i1++;
    }

    cout << "Factorial of " << num1 << " = " << fact1 << endl;
    return 0;
}
