// list also called doubly linked list



#include <iostream>
#include <list>

using namespace std;
int main(int argc, char const *argv[])
{
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5);
    myList.push_front(1);
    myList.push_front(0);

    myList.pop_back(); // Removes the last element (30)
    myList.pop_front(); // Removes the first element (0)
    



    for(int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
