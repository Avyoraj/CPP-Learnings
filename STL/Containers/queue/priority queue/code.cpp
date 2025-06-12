/*

priority queue


its basically is binery heap data structure
max heap and min heap



max heap largest element is at the top
min heap smallest element is at the top



visualied as a stack 


priority_queue<int> q;
priority_queue<int, vector<int>, greater<int>> q2; // min heap

in proprity largest number is at the top
when we pop we get in a sorted manner
*/




#include <iostream>
#include <queue> // for std::priority_queue
#include <vector>

using namespace std ;


int main(int argc, char const *argv[])
{
    priority_queue <int> q; // Max heap by default

    q.push(5);
    q.push(1);
    q.push(3);
    
    while (!q.empty()) { // Check if the priority queue is not empty
        cout << q.top() << " "; // Access the top element (largest element)
        q.pop(); // Remove the top element
    }
   
   cout << endl;
   
   // reverse order using min heap
    priority_queue<int, vector<int>, greater<int>> q2; // Min heap
    q2.push(5);
    q2.push(1);
    q2.push(3);

    while (!q2.empty()) { // Check if the priority queue is not empty
        cout << q2.top() << " "; // Access the top element (smallest element)
        q2.pop(); // Remove the top element
    }
    
    return 0;
}

/*

time complexity 


push emplace - O(log n) for both max and min heaps
pop - O(log n) for both max and min heaps
top - O(1) for both max and min heaps



logn because sorting takes place
*/




