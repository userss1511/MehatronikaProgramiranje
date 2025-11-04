#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1; i < 300; i++){ //prvi broj
        for(int j = i+1; j < 300; j++){ //drugi broj
            int sumaD1 = 0;
            int sumaD2 = 0;

            for(int i1 = 1; i1 < i; i1++){
                if(i % i1 == 0) {
                    //sumaD1 += i1;
                    sumaD1 = sumaD1 + i1;
                }
            }

            for(int j1 = 1; j1 < j; j1++){
                if(j % j1 == 0){
                    sumaD2 = sumaD2 + j1;
                }
            }

            if(i == sumaD2 && j == sumaD1){
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}
