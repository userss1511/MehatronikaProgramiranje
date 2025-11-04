#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    //Za zadate koeficijente a, b, c riješiti kvadratnu jednačinu.
    int a = 3;
    int b = 2;
    int c = 0;

    double D = b*b - 4*a*c;
    double korijenD = sqrt(D);
    double x1 = (-b + korijenD)/(2*a);
    double x2 = (-b - korijenD)/(2*a);
    printf("%f %f", x1, x2);
    return 0;
}
