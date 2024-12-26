#include <iostream>
using namespace std;
// single inheritance

class Std {
    public:
     int i,n;
     Std(int i,int n) {
           this->i = i;
           this->n = n;

     }

     void print() {
         cout << "i = " << i << " n = " << n << endl;
     }
};

int main () {
    Std s(10,20);
    s.print();
    s.i = 100;
    s.n = 200;
    s.print();
    return 0;
}
