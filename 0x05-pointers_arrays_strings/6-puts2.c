#include "main.h"
/**
 * put2 - prints every other character of string,starting with tge first one
 * @str: stores string as input
 * Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
