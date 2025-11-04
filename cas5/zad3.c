#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zbirOcjena = 0;
    int brojac = 0;

    while(brojac < 10){
        int ocjena;
        scanf("%d", &ocjena);
        zbirOcjena += ocjena;
        brojac = brojac + 1;
    }

    //double prosjek = ((double)(zbirOcjena)) / 10;
    double prosjek = zbirOcjena / 10.0;
    printf("%f\n", prosjek);
    //double scanf -> scanf("%lf")

    return 0;
}
