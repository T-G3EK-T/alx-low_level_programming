#include "main.h"
/**
 * more_numbers - do3a2
 * Description: walaboda z3ma
 * Return: Always 0
 */
void more_numbers(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
putchar(48 + j / 10);
}
putchar(48 + j % 10);
}
putchar('\n');
}
}
