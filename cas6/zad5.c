#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int brDjelilaca = 0;

    if(n == 1){
        printf("Broj je prost!\n");
    }
    else{
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            brDjelilaca = brDjelilaca + 1;
        }
    }

    if(brDjelilaca == 2) {
        printf("Broj je prost!\n");
    }
    else {
        printf("Broj je slozen!\n");
    }
    }
    return 0;
}
