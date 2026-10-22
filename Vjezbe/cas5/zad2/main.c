#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    /* if(a < b) {
        printf("a je manje od b\n");
    }

     if(a > b) {
        printf("a je vece od b\n");
     }

     if(a == b) {
        printf("a je jednako b\n");
     } */

     if(a < b) {
        printf("a je manje od b\n");
     }

     else if(a > b) {
        printf("a je vece od b\n");
     }

     else { // a == b
        printf("a je jednako b\n");
     }

    return 0;
}
