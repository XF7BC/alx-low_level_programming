#include "main.h"
/**
 * print_alphabet - prints alphabet out in lowercase using _putchar
 * Description: Prints alphabets in lowercase,
 * followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
