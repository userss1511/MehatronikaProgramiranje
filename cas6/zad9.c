#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int br = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < br; j++){
            printf("*");
        }
        br = br + 1;
        printf("\n");
    }
    return 0;
}
