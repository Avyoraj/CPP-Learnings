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

    
    stack<int> s2; // Create another stack of integers

    cout << "Size of stack s: " << s.size() << endl; // Output the size of stack s
    cout << "Size of stack s2: " << s2.size() << endl; // Output the size of stack s2


    s2.swap(s); // Swap the contents of stack s with stack s2

    cout << "After swap:" << endl;

    cout << "Size of stack s: " << s.size() << endl; // Output the size of stack s after swap
    cout << "Size of stack s2: " << s2.size() << endl; // Output the size of stack s2 after swap

    return 0;
}