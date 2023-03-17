#include <stdio.h>
/**
*main - lgho
*Return: lkhwa
*/
int main(void)
{
int c, n;
for (c = 0; c < 9; c++)
{
for (n = c + 1; n <= 9; n++)
{
putchar(48 + c);
putchar(48 + n);
if (c + n != 17)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
