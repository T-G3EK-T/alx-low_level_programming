#include "main.h"
/**
 * print_diagonal - do3a2
 * Description: walaboda z3ma
 * @n: ra9em
 * Return: Always 0
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
