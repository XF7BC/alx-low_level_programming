#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times,
 * in lowercase, followed by a new line
 * Return: 0 on success
 */

void print_alphabet_x10(void)
{
	int a = 97;
	int i = 1;

	while (i <= 10)
	{
		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		
		_putchar('\n');
		i++;
	}
}
