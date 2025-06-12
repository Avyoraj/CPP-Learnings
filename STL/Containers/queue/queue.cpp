/*
front remove   

rear add


in queue 

// queue is a FIFO (First In First Out) data structure.





*/



#include <iostream>
#include <stack> // for std::stack
#include <string>
#include <vector>
#include<queue>
using namespace std;


int main(int argc, char const *argv[])
{
    queue<int> s; // Create a queue of integers

    s.push(10); // Pushes 10 onto the stack
    s.push(20); // Pushes 20 onto the stack
    s.push(30); // Pushes 30 onto the stack


while (!s.empty()) { // Check if the stack is not empty
        cout << s.front()  << " " ; // Access the front element
        s.pop(); // Remove the front element
    }

    cout << endl;


    return 0;
}