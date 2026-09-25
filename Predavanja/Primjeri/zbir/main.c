#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    printf ("Unesi 2 broja\n");
    scanf("%d%d", &a, &b);

    c = a*b;
    printf("Proizvod je %d\n", c);

    c=a+b;

    return 0;
}
