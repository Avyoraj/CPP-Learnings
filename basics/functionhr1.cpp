#include <iostream>
#include <cstdio>
using namespace std;

/* 
 * Function to find the maximum of four integers
 */
int max_of_four(int a, int b, int c, int d) {
    // First find the maximum of a and b
    int max_ab = (a > b) ? a : b;
    
    // Then find the maximum of c and d
    int max_cd = (c > d) ? c : d;
    
    // Finally, return the maximum of max_ab and max_cd
    return (max_ab > max_cd) ? max_ab : max_cd;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}