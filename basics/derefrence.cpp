// derefrance 


#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int a = 5 ;

    int* p = &a;

    int** q = &p ;


/* example for address not actuall answer for address 
variable       a p   q
value          5 100 500

address       100 500 700

*/

    cout << *(p) << endl;  //  *(100) 
    cout << **(q) << endl ; // **(500) --> *(100) -->  5 

    cout << p << endl ; // &a
    cout << *q << endl;  // &a


     

    return 0;
}
