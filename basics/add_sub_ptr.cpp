#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int arr[]= {1,2,3,4,5} ;

    int a=10 ;

    int* ptr = &a ;

    cout << ptr << endl ;

    ptr = ptr +2 ;

    
    cout << ptr << endl ;




    return 0;
}
