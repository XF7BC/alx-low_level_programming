#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}
