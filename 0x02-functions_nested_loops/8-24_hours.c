#include "main.h"
/**
 * jack_bauer - hiiiiippa
 * Description: ba7bou7i
 * Return: Always 0.
 */
void jack_bauer(void)
{
int i, j, y, z, k;
k = 9;
for (i = 0; i <= 2; i++)
{
if (i == 2)
{
k = 3;
}
for (j = 0; j <= k; j++)
{
for (y = 0; y <= 5; y++)
{
for (z = 0; z <= 9; z++)
{
_putchar(48 + i);
_putchar(48 + j);
_putchar(':');
_putchar(48 + y);
_putchar(48 + z);
_putchar('\n');
}
}
}
}
}
