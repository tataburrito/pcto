#include <stdio.h>

int main()

{
    char identificazione; 
    printf("la mia identificazione e  ");
    scanf("%c", &identificazione);


    if(identificazione == 'f')
    {
       printf("hai raggio!!\n");
    }
    else if (identificazione == 'm')
    { 
        printf("hai raggio comunque, sono michael jackson\n");
    }
    else if(identificazione == 'n')
    {
        printf("non propriamente perche mi identifico in una saponetta\n");
    }
    else 
    {
        printf("sei un errore della natura, non sei niente\n");
    }

}