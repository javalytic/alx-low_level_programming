#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, co;
	co = 0;
	
	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		
		putchar('\n');
	}
}
