#include <stdio.h>
#include <stdlib.h>

int main()
{
   int brBodova;
   scanf("%d", &brBodova);

   /*if(brBodova > 50){
    printf("Student polozio!\n");
   }
   else {
    printf("Student pao!\n");
   }*/

   printf(brBodova > 50 ? "Student polozio!\n" : "Student pao!\n");

   return 0;
}
