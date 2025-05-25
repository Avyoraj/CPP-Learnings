// pointers 

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a = 10 ;
    int* ptr = &a ; 


    int** ptr2 = &ptr ;  //pointer to pointer 


    cout << &ptr << endl; // actual address of ptr 

    cout << ptr2 << endl ; // proved that ptr2  points/stored to address of ptr 
// o/p for both will be same here   



// derefrenceing 

cout << *(&a) << endl;
cout << *(ptr) << endl ;


    return 0;
}

