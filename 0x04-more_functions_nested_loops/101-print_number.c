#include "main.h"
void print_integer(int n);

/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: Nothing
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int n)
{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		if (n / i != 0)
		{
			_putchar((n / i) % 10 + '0');
		}
}
