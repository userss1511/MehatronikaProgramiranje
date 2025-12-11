#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void unosMatrice(int m, int n, int mat[m][n]){
    for(int i = 0; i < m; i++){ //vrste
        for(int j = 0; j < n; j++){ //kolone
            scanf("%d", &mat[i][j]);
        }
    }
}

void stampaMatrice(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        printf("%d ", mat[i][j]);
    }
    printf("\n");
}
}

void zad3(int m, int n, int mat[m][n]){
double rez[n];
for(int j = 0; j < n; j++){
    double s = 0;
    for(int i = 0; i < m; i++){
        s = s + mat[i][j];
    }
        rez[j] = s/m;
}

for(int i = 0; i < n; i++){
    printf("%f ", rez[i]);
}
printf("\n");
}

void zad4(int m, int n, int a[m][n], int b[m][n]){
int c[m][n];

for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        int max = a[i][j] > b[i][j] ? a[i][j] : b[i][j];
        c[i][j] = max;
    }
}
stampaMatrice(m, n, c);
}

bool zad5(int m, int n, int mat[m][n]){
int suma = 0;
for(int j = 0; j < n; j++){
    suma = suma + mat[0][j];
}

for(int i = 1; i < m; i++){
    int pomSuma1 = 0;
    for(int j = 0; j < n; j++){
        pomSuma1 = pomSuma1 + mat[i][j];
    }
    if(pomSuma1 != suma) return false;
}


for(int j = 0; j < n; j++){
    int pomSuma2 = 0;
    for(int i = 0; i < m; i++){
        pomSuma2 = pomSuma2 + mat[i][j];
    }
    if(pomSuma2 != suma) return false;
}

return true;
}

int zad6(int m, int n, int mat[m][n]){
int suma = 0;
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        if(i % 2 == 0 && j % 2 != 0)
            suma = suma + mat[i][j];
    }
}

return suma;
}

void zad7(int m, int n, int mat[m][n], int r, int s){
int temp[m];

for(int i = 0; i < m; i++){
    temp[i] = mat[i][r];
}

for(int i = 0; i < m; i++){
    mat[i][r] = mat[i][s];
}

for(int i = 0; i < m; i++){
    mat[i][s] =  temp[i];
}
}

bool uslovZad8(int niz[], int n){
for(int br = 1; br <= n; br++){
    bool ind = false;
    for(int i = 0; i < n; i++){ //indeks niza
        if(niz[i] == br) ind = true;
    }
    if(ind == false) return false;
}

return true;
}

void zad8(int n, int mat[n][n]){
bool ind = true;
for(int i = 0; i < n; i++){
    if(uslovZad8(mat[i], n) == false){
        ind = false;
    }
}

if(ind) {
    printf("Da!\n");
}
else {
    printf("Ne!\n");
}
}

void zad9(int m, int n, int mat[m][n]){
for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
        bool ind = true;
        if(i - 1 >= 0 && j - 1 >= 0 && mat[i][j] < mat[i-1][j-1]) ind = false;
        if(j - 1 >= 0 && mat[i][j] < mat[i][j-1]) ind = false;
        if(i +1 < m && j - 1 >= 0 && mat[i][j] < mat[i+1][j-1]) ind = false;
        if(i - 1 >= 0 && mat[i][j] < mat[i-1][j]) ind = false;
        if(i +1 < m && mat[i][j] < mat[i+1][j]) ind = false;
        if(i - 1 >= 0 && j + 1 < n && mat[i][j] < mat[i-1][j+1]) ind = false;
        if(j +1 < n && mat[i][j] < mat[j][j+1]) ind = false;
        if(i +1 < m && j + 1 < n && mat[i][j] < mat[i+1][j+1]) ind = false;
        if(ind == true) printf("%d\n", mat[i][j]);
    }
}

}

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    unosMatrice(m, n, mat);
    //stampaMatrice(m, n, mat);
    /*int mat[2][2] = {{1, 2}, {3, 4}};
    printf("%d", mat[0][1]);*/
    //zad3(m, n, mat);
    /*int a[m][n];
    int b[m][n];
    unosMatrice(m, n, a);
    unosMatrice(m, n, b);
    zad4(m, n, a, b);*/
    //printf("%d\n", zad5(m, n, mat));
    //printf("%d\n", zad6(m, n, mat));
    //zad7(m, n, mat, 1, 3);
    //stampaMatrice(m, n, mat);
    //zad8(n, mat);
    //zad9(m, n, mat);
    return 0;
}
