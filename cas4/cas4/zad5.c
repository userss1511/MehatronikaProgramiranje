#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Napisati program u programskom jeziku C koji učitava dva cijela broja (a i b) i ispisuje rezultate njihovog poređenja.
    int a = 4;
    int b = 10;

    if(a > b){
        printf("a je vece od b\n");
    }
    else if(a < b) {
     printf("a je manje od b\n");
    }
    else {
        printf("a je jednako b\n");
    }

    return 0;
}
