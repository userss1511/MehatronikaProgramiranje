#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int a, b, c;
    for(c = 10; c <= 99; c++){
      bool ind = false;
        for(a = 1; a <= c; a++){
            for(b = a+1; b <= c; b++){
                    if(c*c == a*a + b*b && ind == false){
                        ind = true;
                        printf("%d\n", c);
                    }

            }
        }
    }


    return 0;
}
