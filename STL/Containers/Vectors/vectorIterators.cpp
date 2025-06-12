#include <iostream>

#include <vector> 


using namespace std;



int main(int argc, char const *argv[])
{
    vector <int> vec ={1,2,3,4,5} ;
  
    cout << "vec.begin : " << *(vec.begin()) << endl ;
    cout << "vec.end : " << *(vec.end()) << endl ; // random vallue dega or 0


    vector <int>::iterator it;

    for(it = vec.begin() ; it !=vec.end();it++) {
        cout << *(it) ;
    }
    
    cout << endl;
   // reverse iterator 

   vector <int>::reverse_iterator i ;
   for( i = vec.rbegin(); i !=vec.rend() ; i++) {

    cout << *(i) ; 
   }



    cout << endl ;

    return 0;
}
