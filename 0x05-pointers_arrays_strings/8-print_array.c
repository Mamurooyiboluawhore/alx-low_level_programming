#include "main.h"
/**
 * puts_half - Prints half of a string
 * @str: variables tgat store string
 * Return: void 
 */

void puts_half(char *str)
{
int j, k, len;

len = 0;
for (j = 0 ; str[j] != '\0'; j++)
{
len ++;
}

k = (len / 2);
if ((len % 2) == 1)
k = ((len + 1) / 2);
for ( j = k; str[j])
_putchar(str[j]);
_putchar('\n');
}
