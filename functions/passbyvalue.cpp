// pass by value 



#include <iostream>
using namespace std;


// pass by value example
// swapaing of number


void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "inside swap" << endl;
    cout << "a: " << a << " b: " << b << endl;
}

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 20;

    swap(a, b);


    cout << "inside main" << endl;
    cout << "a: " << a << " b: " << b << endl;

    return 0;
}


/*

basically in pass by value the orignal value is not changed
the value is copied to the function and the operation is performed on the copied value
so the orignal value is not changed

*/