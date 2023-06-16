#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
    int i , a ,b,c;
    if(n<=98) {
        for (i=n; i<=98; i++) {

            if(i<10 && i>=0) {
                _putchar(i +'0');
                _putchar(',');
                _putchar(' ');
            } else if(i>10 ) {
                a = i / 10;
                b =i % 10;
                _putchar(a +'0');
                _putchar(b +'0');
                 if (i ==98)
                    break;
                _putchar(',');
                _putchar(' ');

            }
            else if( i<0 && i>-10) {
                c = i * -1;
                _putchar('-');
                _putchar( c +'0');               
                _putchar(',');
                _putchar(' ');

            }
            else if( i<=-10) {
                c = i * -1;                
                a = c / 10;
                b =c % 10;
                _putchar('-');
                _putchar(a +'0');
                _putchar(b +'0');
                _putchar(',');
                _putchar(' ');

            }
        }
        _putchar('\n');

    }

     if(n>98) {
        for (i=n; i>=98; i--) {

            if(i<100) {
                a = i / 10;
                b =i % 10;
                _putchar(a +'0');
                _putchar(b +'0');
                if (i ==98)
                    break;
                
                _putchar(',');
                _putchar(' ');

            }
            else if(i>=100) {
                a = i / 100;
                b =(i / 10) % 10;
                c = i % 10;
                _putchar(a +'0');
                _putchar(b +'0');
                _putchar(c +'0');
                _putchar(',');
                _putchar(' ');
              

            }
        }
        _putchar('\n');

    }

    return;''
}