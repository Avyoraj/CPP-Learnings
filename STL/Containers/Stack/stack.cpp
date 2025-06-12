


#include <iostream>
#include <stack> // for std::stack
#include <string>
#include <vector>
using namespace std;


int main(int argc, char const *argv[])
{
    stack<int> s; // Create a stack of integers

    s.push(10); // Pushes 10 onto the stack
    s.push(20); // Pushes 20 onto the stack
    s.push(30); // Pushes 30 onto the stack

    
    while (!s.empty()) { // Check if the stack is not empty
        cout << "Top element: " << s.top() << endl; // Access the top element
        s.pop(); // Remove the top element
    }



    return 0;
}



/*

stack in non sequential containers



stack <int> s ;



push,emplace 
top 
pop size empty
swap




s.push(10); // Pushes 10 onto the stack
s.top(); // Returns the top element of the stack


Works in LIFO (Last In First Out) manner, meaning the last element added is the first one to be removed.


*/


