#include "main.h"

void print_times_table(int n)
{

if (n<15 && n>=0){
    int k=0, i ,j , a , b ,c;

    for ( i = 0 ; i<=n ; i++) {

        for(j=0 ; j<=n ; j++) {

            k = i*j;

            if( k <10  ) {
                if(j!=0 ){
                 _putchar(' ');
                 _putchar(' ');}
                _putchar(k +'0');

            } else if(k>=10 && k <100){
            a = k /10 ;
            b = k % 10;
             _putchar(' ');
            _putchar(a +'0');
            _putchar(b +'0');

            } else if ( k >= 100) {
                a = k /100 ;
                b = (k /10) % 10;
                c = k % 10;
                _putchar(a +'0');
                _putchar(b +'0');
                _putchar(c +'0');

            }
            if (j!=n) {
                _putchar(',');
                _putchar(' ');

            }



        }

        _putchar('\n');

    }
}
}