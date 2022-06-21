#include "main.h"

/**
 * _strlen_recursion - find the length of the string
 *
 * @s: pointer to string
 * Return: int with the length
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}

	return (0);
}

/**
 * aux_palin - function to find if is palindrome
 *
 * @s: porinter to string
 * @i: counter 0
 * @l: length (last digit)
 * Return: 1 for palindrome, 0 for not
 */
int aux_palin(char *s, int i, int l)
{
	if (i >= l)
	{
		return (1);
	}
	/*comparing characters on string s*/
	if (s[i] == s[l])
	{
		return (aux_palin(s, i + 1, l - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function that calls the other functions
 *
 * @s: pointer to string
 * Return: the result on aux_palin
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = _strlen_recursion(s);

	return (aux_palin(s, i, l - 1));
}
