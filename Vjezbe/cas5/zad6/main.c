#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Unesite temperaruru (C): ");
    double c;
    scanf("%lf", &c);
    double f = 1.8 * c + 32;

    printf("Temperatura (F) je: %f\n", f);
    return 0;
}
