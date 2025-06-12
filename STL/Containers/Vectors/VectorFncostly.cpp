#include <iostream>

#include <vector> 


using namespace std;



int main(int argc, char const *argv[])
{
    vector <int> vec ={1,2,3,4,5} ;
   // vec.erase(vec.begin()+2); 
  
// range method 


 // vec.erase(vec.begin()+1 , vec.begin() +  3 );
 
 
 // insert 

 vec.insert(vec.begin()+2,100) ; // insert 100 in middle

 vec.clear() ;
cout<<endl;
cout<< vec.size() <<"   "<< vec.capacity() <<endl;
     
  
    for (int val : vec ) {
        cout << val << " "  ;
    }
   

    cout << endl ;

    return 0;
}
