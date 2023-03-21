#include "main.h"
/**
 * print_sign - hiiiiippa
 * Description: ba7bou7i
 * @n: Ascii code of a char
 * Return: Always 0.
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n > 0)
{
_putchar('+');
return (1);
}
_putchar('-');
return (-1);
}
