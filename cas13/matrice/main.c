#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

void stampaMatrica(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}

}

void ucitajMatricu(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        scanf("%d", &mat[i][j]);
    }
}
}

int zad1(int m, int n, int mat[m][n]){
if(m != n) return -1;
int max =  INT_MIN;
int maxInd = -1;
for(int i = 0; i < m; i++){
    if(mat[i][i] > max){
        max = mat[i][i];
        maxInd = i;
    }
}

return maxInd;
}

double zad2(int m, int n, int mat[m][n]){
double s = 0;

for(int i = 0; i < n; i++){
        s = s + mat[i][n-1-i];

}

return s/n;
}

bool zad3(int m, int n, int mat[m][n]){
if(m != n) return false;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        if(mat[i][j] != mat[j][i]) return false;
    }
}

return true;
}

void zad4(int m, int n, int mat[m][n]){
int rez[m][n];
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        rez[i][j] = mat[i][n-1-j];
    }
}

stampaMatrica(m, n, rez);
}

void zad5(int m, int n, int mat[m][n]){
int rez[n][m];
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        rez[j][m-i-1] = mat[i][j];
    }
}

stampaMatrica(n, m, rez);
}

int maxNiza(int niz[], int n){
int max = INT_MIN;
for(int i = 0; i < n; i++){
    if(niz[i] > max){
        max = niz[i];
    }
}
return max;
}

int minNiza(int niz[], int n){
int min = INT_MAX;
for(int i = 0; i < n; i++){
    if(niz[i] < min){
        min = niz[i];
    }
}
return min;
}

void zad6(int m, int n, int mat[m][n]){
int maksimumi[m];
int minimumi[m];
for(int i = 0; i < m; i++){
    maksimumi[i] = maxNiza(mat[i], n);
    minimumi[i] = minNiza(mat[i], n);
}

for(int i = 0; i < m; i++){
    printf("%d ", maksimumi[i]);
}
printf("\n");


for(int i = 0; i < m; i++){
    printf("%d ", minimumi[i]);
}
printf("\n");

}

void zad7(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        if(mat[i][j] == 1){
            bool ind = true;
            if(i-1 >= 0 && j-1 >= 0 && mat[i-1][j-1] == 1) ind = false;
            if(i-1 >= 0 && mat[i-1][j] == 1) ind = false;
            if(i-1 >= 0 && j+1 < n && mat[i-1][j+1] == 1) ind = false;
            if(j-1 >= 0 && mat[i][j-1] == 1) ind = false;
            if(j+1 < n && mat[i][j+1] == 1) ind = false;
            if(i+1 < m && j-1 >= 0 && mat[i+1][j-1] == 1) ind = false;
            if(i+1 < m && mat[i+1][j] == 1) ind = false;
            if(i+1 < m && j+1 < n && mat[i+1][j+1] == 1) ind = false;

            if(ind) printf("%d %d\n", i, j);

        }

    }
}
}
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    ucitajMatricu(m, n, mat);
    //printf("%d\n", zad1(m, n, mat));
    //printf("%f\n", zad2(m, n, mat));
    //printf("%d\n", zad3(m, n, mat));
    //zad4(m, n, mat);
    //zad5(m, n, mat);
    //zad6(m, n, mat);
    zad7(m, n, mat);
    return 0;
}
