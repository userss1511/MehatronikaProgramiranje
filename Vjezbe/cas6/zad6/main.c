#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    /*bool ind1 = true; // 1
    bool ind2 = false; // 0*/

    bool uzastopneCifre = false;

    while(n > 10) {
        int cif1 = n % 10;
        int cif2 = (n / 10) % 10;
        if(cif1 == cif2) {
            uzastopneCifre = true;
            break;
        }
        n = n / 10;
    }

    if(uzastopneCifre == true) {
        printf("Nasli bar dvije uzastopne cifre!\n");
    }
    else {
        printf("Nema uzastopnih cifara!\n");
    }
    return 0;
}
