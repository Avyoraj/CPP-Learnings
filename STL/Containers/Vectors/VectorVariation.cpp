#include <iostream>

#include <vector> 


using namespace std;



int main(int argc, char const *argv[])
{
    // vector <int> vec ={1,2,3,4,5} ;
   // vector <int> vec(3,10) ;   // dp me use hoga

        vector <int > vec1{1,2,3,4,5} ;
        vector <int > vec2(vec1) ;

     
  
    for (int val : vec2 ) {
        cout << val << " "  ;
    }
   

    cout << endl ;

    return 0;
}
