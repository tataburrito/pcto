#include <stdio.h>

int main()
{ 
    int età;
    printf("la mia eta è ");
    scanf("%d", &età);
    
    if(età < 18)
    {
        printf("non hai responsabilità\n");
    }
    else
    { 
        printf("devi preparare la patente\n");
    }
}  
    