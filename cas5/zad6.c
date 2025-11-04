#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sumaCifara = 0;

    while(n > 0){
        int cifra = n % 10;
        sumaCifara = sumaCifara + cifra;
        n = n / 10;
    }

    printf("Suma cifara broja je %d.\n", sumaCifara);
    return 0;
}
