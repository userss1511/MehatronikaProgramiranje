#include <stdio.h>
#include <stdlib.h>

int main()
{

    // -> komentar u jednoj liniji
    /*
    komentar
    u
    vise
    linija
    */
    /// Napomena

    int x = 2; // cijeli brojevi
    float y = 3.12; // decimalni brojevi (manja preciznost)
    double z = 4.212121; // decimalni brojevi (veca preciznost)
    char c = 's'; // karakter

    /*printf("Broj x = %d\n", x);
    printf("Broj y = %f\n", y);
    printf("Broj z = %f\n", z);
    printf("Karakter c = %c\n", c);*/

    int br;
    scanf("%d", &br);
    printf("%d\n", br);

    float br1;
    scanf("%f", &br1);
    printf("%f\n", br1);

    double br2;
    scanf("%lf", &br2);
    printf("%f\n", br2);


    /// Aritmeticki operatori
    /*
        + --> sabiranje
        -  --> oduzimanje
        * --> mnozenje
        /  --> dijeljenje
        % --> mod

        int / int  --> int   (div)
        3 / 2 --> 1
        3.0 / 2 --> 1.5
        double / double --> double
        double / int --> double
        int / double --> double

        (double) 3 / 2
         3 / (double) 2
         3.0 / 2
         3 / 2.0
         3.0 / 2.0

         5 % 2 = 1 (5 = 2*2 + 1)
         4 % 2 = 0 (4 = 2*2 + 0)
    */

    /// Operatori poredjenja
    /*
        > - vece od
        < - manje od
        >= - vece ili jednako od
        <= - manje ili jednako od
        == - operator jednakosti
        != - nije jednako

    */

    /// Logicki operatori
    /*
        && - AND, I
        ||    - OR, ILI
        !     - NOT, NEGACIJA

    */

   /*
    i++;
    i = i + 1;
    i += 1;
    i += 10; isto kao i i = i + 10
    ++i;
    i--;
    i *= 10; i = i * 10;
    i /= 10; i = i / 10;

    */
/*
    if(a > b) {
           // dio koda
    }
    else {
        // dio koda
    }
*/
    return 0;
}
