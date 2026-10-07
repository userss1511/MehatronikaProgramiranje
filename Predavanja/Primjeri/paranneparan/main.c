#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Unesite broj\n");
    int a;

    scanf("%d", &a);
    //printf ("%d", a);


    if (a % 2 == 0)
        printf("Paran\n");
    else
        printf("Neparan\n");


    return 0;
}
