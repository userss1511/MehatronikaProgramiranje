#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;

    printf("Unesi temperaturu\n");

    scanf("%f", &t);

    int stanje;

    if (t > 60)
    {
        printf("Ukljuci ventilator");
        stanje = 1;
    }

    return 0;
}
