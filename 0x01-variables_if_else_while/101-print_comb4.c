#include <stdio.h>
/**
*main - lgho
*Return: lkhwa
*/
int main(void)
{
int c, n, z;
for (c = 0; c < 9; c++)
{
for (n = c + 1; n <= 9; n++)
{
for (z = n + 1; z <= 9; z++)
{
putchar(48 + c);
putchar(48 + n);
putchar(48 + z);
if (c + n + z != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
