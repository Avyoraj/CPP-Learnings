// fibonacci series using function 
// witthout using recursion


#include <iostream>
using namespace std;

int fibonacci(int n) {
    int t0 = 0;
    int t1 = 1;
    int nextTerm;

    for (int i = 2; i <= n; i++) {
        nextTerm = t0 + t1;
        t0 = t1;
        t1 = nextTerm;
    }

    return nextTerm;
}

int main(int argc, char const *argv[])
{
    cout << "enter number" << endl;
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}
