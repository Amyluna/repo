#include "main.h"

/**
 *  * print_alphabet - print all alphabet in lowercase
 *   */

int print_last_digit(int n)
{

    if (n<0) {
        n = n *-1;
    }

    n = n % 10;
    _putchar('0'+ n);

    return(n);

}