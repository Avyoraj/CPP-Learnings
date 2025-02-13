// print all the prime numbers from 2 to n using functions



#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrime(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}


int main(int argc, char const *argv[])
{
    cout << "enter number" << endl;
    int n;
    cin >> n;

    printPrime(n);

    return 0;
}