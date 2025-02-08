/*

HW PATTERN 1

A
BB
CCC
DDDD
EEEEE

*/


#include  <iostream>
using namespace std;


int main(int argc, char const *argv[])
{

  int n =5;


  int n3 = 4;

    for (int i = 0 ; i < n ; i++){
    for (int j =0 ; j<i+1; j++){
        cout << "x " ;
    }
    cout << endl;
}

 cout << endl ;
 cout << endl ;



   int n1= 5;

    for (int i =0 ; i<n1 ; i++){
        for (int j=0 ; j<i+1 ; j++){
            cout << (i+1) << " ";
        }
        cout << endl;
    } 

 cout << endl;
 cout << endl;

    int n2 = 5;
   
    for (int i =0 ; i<n2 ; i++){
         char ch = 'A'+i; 
        for ( int j =0 ; j < i+1; j++){
        cout << ch << " ";
        

        }
    cout << endl;
    
    }   

cout << endl;
cout << endl;




    for ( int i =0 ; i<n ; i++){
        char ch = 'A' ;
        for (int j =0 ; j<i+1 ; j++){
            cout << ch++ << " ";
        }
        cout << endl ;
       }  

cout << endl;
cout << endl;

    for (int i = 0 ; i <n ; i++){
        for ( int j =0 ; j < i+1 ; j++){
            cout << j+1 << " " ;
        }
        cout << endl ;
    }
      
      cout << endl;
cout << endl;

// modified wala
 for (int i = 0 ; i <n ; i++){
        for ( int j =1 ; j <= i+1 ; j++){
            cout << j << " ";
        }
        cout << endl ;
    }
      




  
    return 0;

}
    

