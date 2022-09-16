#include "main.h"
/**
 *_isupper - Checks for uppercase characters
 *@c: Takes a character as input
 * Return: 1 for uppercase, 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

