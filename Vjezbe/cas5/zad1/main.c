#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double s = (a + b + c) / 2;
    double p = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Povrsina je: %.3f\n", p);
    return 0;
}
