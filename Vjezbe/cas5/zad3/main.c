#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, min;
    scanf("%lf %lf", &a, &b);
    
    if(a < b) {
        min = a;
    }
    else {
        min = b;
    }

    printf("%f\n", min);
    return 0;
}
