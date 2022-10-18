#include <stdio.h>
/**
 * main - main body
 * Description: Writes a program that prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
        char x[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
        unsigned int i;

        for (i = 0; i < sizeof(x); i++)
        {
                _putchar(x[i]);
        }
        _putchar("\n");

          return (0);
}
  
