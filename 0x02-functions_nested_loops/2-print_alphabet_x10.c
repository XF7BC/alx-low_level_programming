#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times,
 * in lowercase, followed by a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a = 97;

	for (i = 0; i <= 10; i++)
	{
		while (a <= 122)
		{
			_putchar(a[i]);
			a++;
		}

		_putchar('\n');
	}
}
