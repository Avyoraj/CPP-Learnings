// floyd tringle 
/*
1
23
456
78910
*/


#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{   int n =5 ;
    int num =1;
    for (int i = 0 ; i <n ; i++){
        for (int j =0 ; j < i+1; j++ ){
            cout << num <<  " " ;
            num++;
        }
     cout << endl;
    }
 cout << endl;
 cout << endl;

// usuing backwords 

 int n1 =5 ;
    int num1 =1;
    for (int i = 0 ; i <n1 ; i++){
        for (int j =i+1 ; j>0; j-- ){
            cout << num1 <<  " " ;
            num1++;
        }
     cout << endl;
    }

cout << endl;
cout << endl;


  // for character 


  int n2 =5 ;

  char ch = 'A';

  for ( int i =0 ; i < n ; i++ ){
    for ( int j = 0 ; j< i+1 ; j++ ){
        cout << ch << " " ;
        ch++ ;
    }
    cout << endl;
  }  



    return 0;
}
