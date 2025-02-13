// sum of digits of a number using functions

/*
logic

num = 145 

num = 145  % 10 = 5
num = 14 % 10 = 4
num =  1 % 10 = 1



to get last digit we use mod 
to get the remaining digits we use division


num % 10 reminder = digits

num = num / 10
*/


#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int digitsum = 0;

    while (num > 0) {
       int lastdigit = num % 10;
       num = num / 10;

       digitsum += lastdigit;
    }

    return digitsum;
}

int main(int argc, char const *argv[])
{
    cout << "enter number" << endl;
    int num;
    cin >> num;

    cout << "sum of digits is" << endl;

    cout << sumOfDigits(num) << endl;



    return 0;
}
