#include "main.h"
/**
 * times_table - hiiiiippa
 * Description: ba7bou7i
 * Return: Always 0.
 */
void times_table(void)
{
int i, z, t;
for (i = 0; i <= 9; i++)
{
for (z = 0; z <= 9; z++)
{
t = i * z;
if (t >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(48 + t / 10);
_putchar('0' + t % 10);
}
else
{
if (z == 0)
{
_putchar(48 + t);
continue;
}
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(48 + t);
}
}
_putchar('\n');
}
}
