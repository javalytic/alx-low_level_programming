#include "main.h"
/**
 * _memset - a function that fills memory with constant bytes
 * @s: pointer to the variabl's adress where is gonna be overwritten with 'b'
 * @b: variable that contains the value to be overwritten in the pointer '*s'
 * the first n bytes
 * @n: number of bytes that is gonna be overwritten in pointer '*s'
 * Return: pointer to the address where have been changed the values
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
