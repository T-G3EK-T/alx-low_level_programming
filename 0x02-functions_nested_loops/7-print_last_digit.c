#include "main.h"
/**
 * print_last_digit - hiiiiippa
 * Description: ba7bou7i
 * @c: Ascii code of a char
 * Return: Always 0.
 */
int print_last_digit(int c)
{
c = c % 10
if (c < 0)
    c = -c;
_putchar(48 + c);
return (c);
}
