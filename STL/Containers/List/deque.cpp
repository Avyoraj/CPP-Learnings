// deque is double ended queue that allow insertion and deletion at both ends.
// dequeue is a sequence container that allows fast insertion and deletion at both ends.



#include <iostream>
#include <deque> 


using namespace std;


int main() {
    deque<int> myDeque;

    // Adding elements to the front and back
    myDeque.push_back(10);
    myDeque.push_back(20);
    myDeque.push_front(5);
    myDeque.push_front(1);

    // Removing elements from the front and back
    myDeque.pop_back();  // Removes the last element (20)
    myDeque.pop_front(); // Removes the first element (1)

    // Displaying the contents of the deque
    for (int val : myDeque) {
        cout << val << " ";
    }

    cout << endl;


    cout << myDeque[2] << endl; // Accessing the third element (index 2)
    return 0;
}