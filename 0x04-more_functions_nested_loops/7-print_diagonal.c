#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of time '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int co, sp;

	for (n <= 0)
	{
		_putchar('\');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			for (sp = 1; sp < 0; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
