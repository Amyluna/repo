#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of @a and @b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The result of @a minus @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two integers.
 * @a: The first integer.
 * @b: The second integer (non-zero).
 *
 * Return: The result of @a divided by @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Calculates the remainder of division between two integers.
 * @a: The first integer.
 * @b: The second integer (non-zero).
 *
 * Return: The remainder of @a divided by @b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
