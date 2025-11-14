#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int skalarniProizvod(int x1, int y1, int z1, int x2, int y2, int z2){
return x1*x2 + y1*y2 + z1*z2;
}

double modul(int x, int y, int z){
return sqrt(x*x + y*y + z*z);
}

double kosinus(int x1, int y1, int z1, int x2, int y2, int z2){
    return skalarniProizvod(x1, y1, z1, x2, y2, z2)/(modul(x1, y1, z1) * modul(x2, y2, z2));
}
int main()
{
    double rez = kosinus(1, 2, 3, 2, 3, 1);
    printf("%f\n", rez);
    return 0;
}
