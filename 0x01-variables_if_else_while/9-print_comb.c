#include <stdio.h>
/**
*main - ho3333
*Return: gha lfom
*/
int main(void)
{
int c;
for (c = 0; c <= 9; c++)
{
{
if (c != 0)
putchar(',');
putchar(' ');
}
putchar(48 + c);
}
putchar('\n');
return (0);
}
