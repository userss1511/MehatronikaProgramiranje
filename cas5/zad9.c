#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    bool ind = false;

    while(n > 0) {
        int cif1 = n % 10;
        int cif2 = (n / 10) % 10;
        if(cif1 == cif2){
            ind = true;
            break;
        }
        n = n / 10;
    }

    printf("%d", ind);
    return 0;
}
