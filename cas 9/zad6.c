#include <stdio.h>
#include <stdlib.h>

int izmijeniBroj(int n){
int noviBroj = 0;
while(n > 0){
    int cif = n % 10;
    noviBroj = noviBroj + cif;
    n = n / 10;
}
return noviBroj;
}

int digitalniKorijen(int n){
int br = 0;
while(n >= 10){
    br = br + 1;
    n = izmijeniBroj(n);
}
return br;
}

int main()
{
    printf("%d\n", digitalniKorijen(9875));
    return 0;
}
