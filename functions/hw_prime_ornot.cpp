// check prime or not using funtion


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




int main(int argc, char const *argv[])
{
    cout << "enter number" << endl;
    int num;
    cin >> num;

    if (isPrime(num)) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }

    return 0;
}