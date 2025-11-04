#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, m, g;
    scanf("%d %d %d", &d, &m, &g);
    /*m=1, 3, 5, 7, 8, 10
    m = 4, 6, 9, 11
    m = 2 (godina prestupna 29/godina nije prestupna 28)
    m = 12
    (g % 400 == 0) || ((g % 4 == 0) && (g % 100 != 0)) -> godina prestupna*/

    int noviD = d;
    int noviM = m;
    int novaG = g;

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10){
        if(d + 1 > 31){
            noviD = 1;
            noviM = m + 1;
        }
        else {
            noviD = d + 1;
        }
    }

    if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d + 1 > 30){
            noviD = 1;
            noviM = m + 1;
        }
        else {
            noviD = d + 1;
        }
    }

    if(m == 2){
        if((g % 400 == 0) || ((g % 4 == 0) && (g % 100 != 0))){
            if(d + 1 > 29){
                noviD = 1;
                noviM = m + 1;
            }
            else {
                noviD = d + 1;
            }
        }
        else {
                if(d + 1 > 28){
                    noviD = 1;
                    noviM = m + 1;
                }
                else {
                    noviD = d + 1;
                }

        }
    }

    if(m == 12){
        if(d+1 > 31){
            noviD = 1;
            noviM = 1;
            novaG = g + 1;
        }
        else {
            noviD = noviD + 1;
        }
    }

    printf("%d.%d.%d.\n", noviD, noviM, novaG);
    return 0;
}
