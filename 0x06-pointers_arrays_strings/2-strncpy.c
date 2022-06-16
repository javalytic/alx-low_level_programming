#include "main.h"

/**
 * _strncpy - a function that copies the strings
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	for (counter = 0; counter < n && src[counter] != '\n'; counter++)
	{
		dest[counter] = src[counter];
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
