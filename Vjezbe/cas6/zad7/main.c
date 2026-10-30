#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);
    int brCif = 0;
    int noviBr = 0;
    int n1 = n;
    int n2 = n;
    // zadatak: naci broj cifara unijetog broja
    while(n > 0) {
        brCif = brCif + 1;
        n = n / 10;
    }
    //printf("%d\n", brCif);

    while(n1 > 0) {
        int cif = n1 % 10;
        noviBr = noviBr + pow(cif, brCif);
        n1 = n1 / 10;
    }

    if(n2 == noviBr) {
        printf("Broj je Armstrongov!\n");
    }
    else {
        printf("Broj nije Armstrongov!\n");
    }
    return 0;
}
