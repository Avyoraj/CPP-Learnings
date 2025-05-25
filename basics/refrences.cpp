// refrerences ( alias )


#include <iostream>
using namespace std;

void changeA(int& b) {
    b =20 ;   // pass by refrence using alias 

}


int main() {
    int a = 10;  
    changeA(a); 
    cout << "inside main fnx : " << a << endl; // prints 20
    return 0;
}
