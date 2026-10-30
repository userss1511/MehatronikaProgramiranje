#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int sumaOcjena = 0;

    while(i <= 10) {
        int ocjena;
        scanf("%d", &ocjena);
        sumaOcjena = sumaOcjena + ocjena;
        i = i + 1;
    }

    double prosjek = sumaOcjena / 10.0;
    printf("%.2f\n", prosjek);
    return 0;
}
