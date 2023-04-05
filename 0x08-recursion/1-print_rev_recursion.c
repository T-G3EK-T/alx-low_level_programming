#include "main.h"

/**
 * _print_rev_recursion - ma9louba
 * @s: tahadi baghi t3rfha
 * Return: khaltek
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
			_print_rev_recursion(s + 1);
			_putchar(*s);
	}
}
