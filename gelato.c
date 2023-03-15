#include <stdio.h>

int main()

{
    int x;
    int y;

    printf("che numero scegli\n", x);
    scanf("%d", &x);
    y = x;
    
    if (x == 1)
    {
        printf("e primo\n", x);
    }

    while(y > 2)
    {
         y = y - 1;
        
        if(x % y == 0)
        {
            printf ("non e primo\n", x);
            y = 1;
        }
    }
     if ( y != 1)
        {
             printf ("non e un numero primo\n", x);
        }

    
    
}