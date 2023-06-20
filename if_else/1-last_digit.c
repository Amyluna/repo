#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void){
	int n , l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    l = n % 10 ;
	
    if(l > 5){

        printf("the last digit of %d is %d and is greater than 5",n,l);
    }
    else if( l == 0 ){

          printf("the last digit of %d is %d and is 0 and is 0",n,l);
    }
    else if ( l < 6 ){
           printf("the last digit of %d is %d and is less than 6 and not 0",n,l);
    }




	return (0);
}