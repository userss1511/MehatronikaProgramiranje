#include <stdio.h>
#include <stdlib.h>

int main()
{
    int brBodova;
    scanf("%d", &brBodova);

    if(brBodova >= 50) {
        printf("Polozio!\n");
    }
    else {
        printf("Nije polozio!\n");
    }

    int x = -5;
    // aps vrijednost broja
    int apsVrijednost = x > 0 ? x : -x;
    printf("%d\n", apsVrijednost);

    printf(brBodova >= 50 ? "Polozio!\n" : "Nije polozio!\n");
    return 0;
}
