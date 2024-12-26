#include <iostream>
using namespace std;


// multilevel inheritance

class Data1{
    public:

    void data1_call() {
        cout << "Data1 call" << endl;
    }

};

class Data2 : public Data1 {
    public:

    void data2_call() {
        cout << "Data2 call" << endl;
    }

};

class Data3 : public Data2 {
    public:

    void data3_call() {
        cout << "Data3 call" << endl;
    }

};

int main () {

    Data3 d;
    d.data1_call();
    d.data2_call();
    d.data3_call();

    return 0;
}