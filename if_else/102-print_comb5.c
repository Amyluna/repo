#include <stdio.h>
/**
* main - Prints numbers from 0 to 9.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i,j,k,l;


        
for (i =0; i <= 9; i++){

    for(j=0;j<=9;j++){
        
        for (k =0; k <= 9; k++){
            
            for(l=0;l<=9;l++){

        if(j!=l &&j<=l){
        putchar(i + '0');
        putchar(j + '0');
        putchar(' ');
        putchar(k + '0');
        putchar(l + '0');
        
   
        putchar(',');
        putchar(' ');
        }
                 
    }
    }       

        
    }
}

putchar('\n');
return (0);
}