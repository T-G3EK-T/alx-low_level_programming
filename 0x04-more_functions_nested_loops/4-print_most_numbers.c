#include "main.h"
/**
 * print_most_numbers - do3a2
 * Description: walaboda z3ma
 * Return: Always 0
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 2 || i != 4)
{
putchar(48 + i);
}
}
putchar('\n');
}
