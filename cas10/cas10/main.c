#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

void unesiNiz(int niz[], int n){
for(int i = 0; i < n; i++){
    scanf("%d", &niz[i]);
}
}

void stampaNiza(int niz[], int n){
for(int i = 0; i < n; i++){
    printf("%d ", niz[i]);
}
printf("\n");
}

int brParnih(int niz[], int n){
int br = 0;
for(int i = 0; i < n; i++){
    if(niz[i] % 2 == 0){
        br = br + 1;
    }
}
return br;
}

void kvadriraj(int niz[], int n){
for(int i = 0; i < n; i++){
    niz[i] = niz[i]*niz[i];
    //niz[i] = pow(niz[i], 2);
}
}

void kvadriraj2(int x){
x = x*x;
}

int minimumNiza(int niz[], int n){
int min = INT_MAX;
for(int i = 0; i < n; i++){
    if(min > niz[i]){
        min = niz[i];
    }
}
return min;
}

int maksimumNiza(int niz[], int n){
int max = INT_MIN;
for(int i = 0; i < n; i++){
    if(max < niz[i]){
        max = niz[i];
    }
}

return max;
}

int minimumNizaNep(int niz[], int n){
int min = INT_MAX;
for(int i = 0; i < n; i++){
    if(niz[i] < min && niz[i] % 2 == 1){
        min = niz[i];
    }
}
return min;
}

double aritmetickaSredina(int niz[], int n){
double s = 0;
for(int i = 0; i < n; i++){
    s = s + niz[i];
}
return s/n;
}

void bubbleSort(int niz[], int n){ //rastuce
for(int j = 0; j < n; j++){
    for(int i = 0; i < n-1; i++){
        if(niz[i] > niz[i+1]){
            int temp = niz[i];
            niz[i] = niz[i+1];
            niz[i+1] = temp;
        }
    }
}
}

int main()
{
    int n;
    scanf("%d", &n);
    int niz[n];
    unesiNiz(niz, n);
    stampaNiza(niz, n);
    //printf("%d\n", brParnih(niz, n));
    //kvadriraj(niz, n);
    //stampaNiza(niz, n);
    /*int x = 10;
    printf("%d\n", x);
    kvadriraj2(x);
    printf("%d\n", x);*/
    //printf("%d\n", minimumNiza(niz, n));
    //printf("%d\n", maksimumNiza(niz, n));
    //printf("%d\n", minimumNizaNep(niz, n));
    //printf("%f\n", aritmetickaSredina(niz, n));
    //bubbleSort(niz, n);
    //stampaNiza(niz, n);
    return 0;
}
