#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int br;
    scanf("%d", &br);

   // int max = -10000000;
    int max = INT_MIN;

    while(br != 0) {
            if(br > max) {
                max = br;
            }
             scanf("%d", &br);
    }

    printf("%d\n", max);
    return 0;
}
