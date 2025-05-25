#include <iostream>
using namespace std;

void changeA(int* ptr) {
    *ptr = 20;  // Dereferencing the pointer to change the actual value
}




int main() {
    int a = 10;  // Or uninitialized, but better to initialize
    changeA(&a); // Pass the address of a
    cout << "inside main fnx : " << a << endl; // prints 20
    return 0;
}
