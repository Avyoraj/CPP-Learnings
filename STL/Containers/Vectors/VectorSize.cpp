#include <iostream>

#include <vector> 


using namespace std;



int main(int argc, char const *argv[])
{
    vector <int> vec ; // 0


    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back() ;

    cout << "size : "<< vec.size() <<endl ; 
    cout << "capacity : " << vec.capacity() <<endl ; 


    cout << endl;
    cout << endl;

    for (int val : vec ) {
        cout << val << " "  ;
    }
    cout << endl ;

    cout<< "value at index 2 :" << vec[2] << " or " <<  vec.at(2) << endl ; // prefer square 


    cout << "front: " << vec.front() << endl;
    cout << "back: " << vec.back() << endl;


    cout << endl ;

    return 0;
}


