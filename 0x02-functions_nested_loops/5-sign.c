#include "main.h"

/**
 * print_sign - function to print the sign of a number
 * @n: Unknown integer
 *
 * Description: prints '+' if n is greater than zero, '0' if n is zero,
 * and '-' if n is less than zero
 *
 * Return: 1 if positive, 0 if zero, and -1 if negative
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');

		return (0);

	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);

	}
	else
	{
		_putchar('+');

		return (1);
	}
}
