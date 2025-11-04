#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*for(int i = 1; i < 6; i++){
        printf("Programiranje\n");
    }*/

    //zadatak pod a
    int a, b;
    scanf("%d %d", &a, &b);
    /*for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            printf("*");
        }
        printf("\n");
    }*/

    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
           if(i == 0 || i == b-1) {
            printf("*");
           }
           else {
            if(j == 0 || j == a-1){
                printf("*");
            }
            else {
                printf(" ");
            }
           }
        }
          printf("\n");
    }

    return 0;
}
