#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //int D = b*b - 4*a*c;
    int D = pow(b, 2) - 4*a*c;

    if(D < 0) {
        printf("Nemamo realna rjesenja\n");
    }
    else if(D == 0) {
        double x = (double) -b / (2*a);
        printf("x = %f\n", x);
    }
    else { // D > 0
        double x1 = (double) (-b - sqrt(D)) / (2*a);
        double x2 = (double) (-b + sqrt(D)) / (2*a);
        printf("x1 = %f  x2 = %f\n", x1, x2);
    }
    return 0;
}
