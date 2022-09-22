#include "main.h"

/**
 * cap_string - Capitalize the first letter of words.
 * @str: string input
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
int i;

i = 0;
while (str[i])
{
while (!(str[i] >= 'a' && str[i] <= 'z'))
i++;

if (str[i - 1] == ' ' ||
str[i - 1] == '\t' ||
str[i - 1] == '\n' ||
str[i - 1] == '"' ||
str[i - 1] == '(' ||
str[i - 1] == ')' ||
str[i - 1] == '{' ||
str[i - 1] == '?' ||
str[i - 1] == '.' ||
str[i - 1] == ';' ||
str[i - 1] == ',' ||
str[i - 1] == '!' ||
str[i - 1] == '}' ||
i == 0)
str[i] -= 32;
i++;
}
return (str);
}
