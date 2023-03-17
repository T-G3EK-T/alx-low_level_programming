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
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
