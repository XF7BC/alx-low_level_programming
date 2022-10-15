#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Using 'purchar' to print all lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
