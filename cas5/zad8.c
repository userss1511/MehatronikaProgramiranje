#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int minCif = 10;

    while(n > 0){
        int cif = n % 10;
        if(cif < minCif){
                minCif = cif;
        }
        n = n / 10;
    }

    printf("Minimalna cifra unijetog broja je: %d\n", minCif);

    return 0;
}
