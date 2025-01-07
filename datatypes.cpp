#include <iostream>
#include <cstdio>
using namespace std;

int main() {
   int a ;
   long b  ;
   char ch ;
   float c ;
   double d ;
   
   
   scanf("%d %ld %c %f %lf" , &a ,&b, &ch, &c ,&d);
   
   printf("%d\n%ld\n%c\n%f\n%lf" , a ,b, ch, c, d) ;
    return 0;
}


// why used scanf and printf instead of cin and cout? check notes folder