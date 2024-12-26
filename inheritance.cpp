#include <iostream>

using namespace std;

class Data1{
    public :
    int age =23;
    int salary =30000;
    int rank = 1;

};

class Data2 : public Data1{
    public:
    int age = 24;
    int salary = 40000;
};


int main () {
    Data2 d;
    cout << "Age = " << d.age << " Salary = " << d.salary << endl;
    cout << "Rank = " << d.rank << endl;
    return 0;
}