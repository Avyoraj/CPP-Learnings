/*
pattern 

1111
 222
  33
   4
or 

AAAAA
 BBBB
  CCC
   DD

*/


#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n= 5;
    int num =1;

    for(int i =0 ; i < n ; i++){
        // spaces
        for (int j = 0 ; j <i ; j++){
            cout  << " " ;
        }
        // nums
        for (int j =0 ; j<n-i; j++){
            cout << (i+1) ;
        }
        cout << endl;
    } 

    cout << endl;
    cout << endl;



// char wala 


        for(int i =0 ; i < n ; i++){
       
          char ch = 'A'+i;
          
        // spaces
        for (int j = 0 ; j <i ; j++){
            cout  << " " ;
        }
        // nums
        for (int j =0 ; j<n-i; j++){
            cout << ch;
        }
        cout << endl;
    } 





    return 0;
}
