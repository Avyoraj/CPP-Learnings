/*
pattern  1
    ABC
    DEF
    GHI

pattern 2
ABC
ABC 
ABC


*/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=3;

    char ch = 'A';  // continous karna he islye outter k bahar hain !!!

    for (int i =0 ; i<n ; i++){
        for( int j=0; j<n;j++){

            cout << ch << " " ;
            ch++ ;
        }
        cout << endl; 
    } 


cout << endl; 
cout << endl; 

// also i am doing type casting implicit wala 
// ascii values of a are getting used here A=65 JO ++ HO RAHA HAIN!!
    
    for (int i =0 ; i<n ; i++){
         char ch = 'A';   // non continous  same line bar bar karna he liye inner k pahale ( outer k baad!!!!)
        for( int j=0; j<n;j++){

            cout << ch << " " ;
            ch++ ;
        }
        cout << endl; 
    } 

cout << endl; 
cout << endl; 


    // similaILARY For numbers 
    // same line wala

    for (int i =0 ; i<n ; i++){
        int num=1;  // non continous  same line bar bar karna he liye inner k pahale ( outer k baad!!!!)
        for( int j=0; j<n;j++){

            cout << num << " " ;
            num++ ;
        }
        cout << endl; 
    }
    cout << endl; 
    cout << endl; 

    // continous 
    int num=1; 
      for (int i =0 ; i<n ; i++){
         // non continous  same line bar bar karna he liye inner k pahale ( outer k baad!!!!)
        for( int j=0; j<n;j++){

            cout << num << " " ;
            num++ ;
        }
        cout << endl; 
    }
     


    return 0;
}
