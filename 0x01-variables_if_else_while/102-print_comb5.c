#include <stdio.h>
/**
 * main - wa ma kat3yawch men l7adia
 * Return: zwa9 o lbokh wa l3yaaaaaaa9a fikom
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar(48 + (i / 10));
putchar(48 + (i % 10));
putchar(' ');
putchar(48 + (j / 10));
putchar(48 + (j % 10));
if (i + j != 197)
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
