// pointers 

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a = 10 ;
    int* ptr = &a ; 


    int** ptr2 = &ptr ;  //pointer to pointer 


    cout << &ptr << endl;

    cout << ptr2 << endl ;


    return 0;
}

