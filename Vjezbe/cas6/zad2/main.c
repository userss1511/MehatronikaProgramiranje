#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int polozili = 0;
    int pali = 0;

    while(i <= 10) {
        int ocjena;
        scanf("%d", &ocjena);
        if(ocjena == 1) {
            polozili++;
        }
        else if(ocjena == 0) {
            pali++;
        }
        else {
            printf("Pogresan unos!\n");
            break;
        }

        i = i + 1;
    }

    printf("Polozili: %d\n", polozili);
    printf("Pali: %d\n", pali);
    printf(polozili > 8 ? "Povecati platu profesoru!\n" : "");
    return 0;
}
