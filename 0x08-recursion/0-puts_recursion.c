#include "main.h"

/**
 * _puts_recursion - kat printi o maso9ekch
 * @s: wa lssa9ni 3la hadi tahia
 * Return: lwezz
*/

void _puts_recursion(char *s)
{
	if(*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
