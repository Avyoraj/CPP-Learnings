// calculate ncr binomial coefficient for n and r
// ncr = n! / (r! * (n-r)!)



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
    cout << "enter n and r" << endl;
    int n, r;
    cin >> n >> r;

    int ncr = factorial(n) / (factorial(r) * factorial(n - r));

    cout << "ncr is " << ncr << endl;

    return 0;
}


