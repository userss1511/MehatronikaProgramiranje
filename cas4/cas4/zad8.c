#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415
int main()
{
    //Za dati poluprečnik r, izračunati i ispisati površinu i obim kruga.
    double r = 1.21;
    double obim = 2*r*PI;
    double povrsina = pow(r, 2)*PI;
    printf("%f %f", obim, povrsina);
    return 0;
}
