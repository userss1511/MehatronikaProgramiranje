#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Učitati dva realna broja i ispisati manji od njih.
   double a, b;
   a = 1.231;
   b = 4.521;

   if(a > b){
    printf("%f\n", b);
   }
   else {
    printf("%f\n", a);
   }

    return 0;
}
