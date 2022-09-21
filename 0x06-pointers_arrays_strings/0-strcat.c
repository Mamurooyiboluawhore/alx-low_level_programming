#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: pointer
 * @dest: destination pointer
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
int n = 0;
int i = 0;
for (; src[n] != '\0'; n++)
{
dest[n] = src[n];
}
for (; src[i] != '\0'; i++)
{
dest [i] = src[i];
}
dest[n] = '\0';
dest[i] = '\0';

return (dest);
}
