// reverse tringle pattern 


/*
1
21
321
4321

or 

A
BA
CBA
DCBA

*/

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int n =5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1 ; j>0 ; j--){
            cout << j << " " ;
        }
        cout << endl;
    }
 cout << endl;
 cout << endl;
    /// char wala



for (int i = 0 ; i < n ; i++){
    char ch = 'A' + i ;
    for( int j = i+1 ; j>0 ; j--){

        cout << ch << " " ;
        ch -- ;

    }
    cout << endl;
}

    

    return 0;
}