// fibonacci series using function 
// witthout using recursion


#include <iostream>
using namespace std;

void fibonacci(int n) {
    int t0 = 0; 
    int t1 = 1;
    int nextTerm;

    cout << t0 << " " << t1 << " ";

    for (int i = 2; i < n; i++) {
        nextTerm = t0 + t1;
        cout << nextTerm << " ";
        t0 = t1;
        t1 = nextTerm;
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    cout << "Enter number: " << endl;
    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}