// functions 


#include <iostream>
using namespace std;


int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}




int main(int argc, char const *argv[])
{
    cout << "enter value" << endl;
    int n;
    cin >> n;

    cout << sum(n) << endl;
    
    return 0;
}
