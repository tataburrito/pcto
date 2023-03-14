#include <stdio.h>

int main()

{
    printf("il lato ha valori: \n");
    int x;
    int y;
    int z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x + y > z && x + z > y && z + y > x )
    { 
        printf("e un triangolo\n");
        
        else if(x == y == z)
        {
        printf("il triangolo e equilatero\n");
        }
        else if (x == y && z != y)
        { 
        printf("e un triangolo isoscele\n");
        }
        else if (x == z && y != z)
        { 
        printf("e un triangolo isoscele\n");
        }
        else if (z == y && x != z)
        { 
        printf("e un triangolo isoscele\n");
        }
        
        else 
        {
            printf("e un triangolo scaleno\n");
        }
    }



    else 
    {
        printf("non e un triangolo\n");
    }
    




}