// factorial using functions

// factrial start with 1 and multiply with all the numbers till n
// when using sum we do sum = 0 and add all the numbers till n

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}



int main(int argc, char const *argv[])
{
    cout << "enter value" << endl;
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    
    return 0;
}