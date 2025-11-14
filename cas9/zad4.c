#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int brPojavljivanja(int n, int cif){
int br = 0;
while(n > 0){
    int trenCif = n % 10;
    if(cif == trenCif) br++;
    n = n / 10;
}
return br;
}

bool imaTriCifre(int n){
while(n > 0){
    int cif = n % 10;
    int brP = brPojavljivanja(n, cif);
    if(brP == 3) return true;
    n = n / 10;
}
return false;
}

void zad4(int a, int b){
for(int i = a; i <= b; i++){
    if(imaTriCifre(i)) printf("%d\n", i);
}
}

int main()
{
    zad4(1900, 2100);
    return 0;
}
