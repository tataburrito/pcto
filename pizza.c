#include <stdio.h>

int main ()
{
   int x; // %d
    // char a %c
    // float 2.1 %f
    //double 234264534563564567 %f
    char sesso;

   printf("ïnserisci la tua età ");
   scanf("%d", &x);
   printf("qual è il tuo sesso ");
   scanf(" %c",&sesso);
   printf("la mia età è %d anni e il tuo sesso e %c\n", x, sesso);

}