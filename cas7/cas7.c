#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
//int, double, float, bool, char -> da nam vrati vrijednost
//void -> da nam nesto izvrsi, najcesce stampa (procedura)

double kvadrat(double x){
double k = x*x;
return k;
}

int zbir(int a, int b){
int s = a + b;
return s;
}

void ispisiZbir(int a, int b){
int s = a + b;
printf("%d\n", s);
}

int znak(int x){
if(x > 0) {
   //printf("Broj je pozitivan\n");
    return 1;
}
else if(x < 0) {
        //printf("Broj je negativan\n");
        return -1;
}
else {
       //printf("Broj je nula\n");
        return 0;
        }
}

int veci(int a, int b){
if(a > b) return a;
else return b;
}

int apsolutno(int x){
    if(x >= 0) return x;
    else {
        int novoX = -1*x;
        return novoX;
        // return -1*x;
    }
}

int paran(int x){
if(x % 2 == 0) return 1;
else return 0;
}

bool paran1(int x){
if(x % 2 == 0) return true;
else return false;
}

int sumaCifara(int n){
int sumaCif = 0;
while(n > 0){
    int cif = n % 10;
    sumaCif = sumaCif + cif;
    n = n / 10;
}

return sumaCif;
}

void sumaCifara1(int n){
int sumaCif = 0;

while(n > 0){
    int cif = n % 10;
    sumaCif = sumaCif + cif;
    n = n / 10;
}

printf("Suma cifara unijetog broja je: %d\n", sumaCif);

}

//Broj cifara nekog broja n
int brojCifara(int n){
int brCif = 0;

while(n > 0){
    brCif = brCif + 1;
    n = n / 10;
}
return brCif;
}

void obrni(int n){
int tezinaCifre = brojCifara(n)-1;
int noviBroj = 0;
while(n > 0){
    int cif = n % 10;
    noviBroj = noviBroj + cif*pow(10, tezinaCifre); // noviBroj = noviBroj + cif*10^(tezinaCifre)
    tezinaCifre = tezinaCifre - 1;
    n = n / 10;
}

printf("%d\n", noviBroj);
}

bool prost(int n){
int brD = 0;
for(int i = 1; i <= n; i++){
    if(n % i == 0){
        brD = brD + 1;
    }
}
if(brD > 2) return false; //broj je slozen
else return true; //broj je prost
}

bool prost1(int n){ //optimalnije rjesenje
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0) return false; //broj je slozen
}
return true; // broj je prost
}

int sumaProstih(int n){
// 1 ... n
int suma = 0;
for(int i = 1; i <= n; i++){
    if(prost(i) == true){ //if(prost(i))    if(prost(i) == 1)
        suma = suma + i;
    }
}
return suma;
}

void faktorijel(int n){
int rez = 1;
for(int i = 1; i <= n; i++){ //1 ... n
    rez = rez * i;
}
printf("Faktorijel unijetog broja je: %d\n", rez);
}

int main()
{
   //stampati proste brojeve od 1 do 10
  /* for(int i = 1; i <= 10; i++){
    if(prost(i) == true) {
        printf("%d\n", i);
    }
   }*/

   //double rez = kvadrat(2);
   //printf("%f\n", rez);
   //printf("%f\n", kvadrat(2));
   //printf("%d\n", zbir(8, 3));
   //ispisiZbir(1, 3);
   //printf("%d\n", znak(0));
   //printf("%d\n", veci(200, 315));
   //printf("%d\n", apsolutno(-909));
   //printf("%d\n", paran(9));
   //printf("%d\n", paran1(13));
   //printf("%d\n", sumaCifara(1213));
   //sumaCifara1(1213);
   //printf("%d\n", brojCifara(123));
   //obrni(12356);
   //printf("%d\n", prost1(8));
   //printf("%d\n", sumaProstih(10));
    //faktorijel(5);
    return 0;
}
