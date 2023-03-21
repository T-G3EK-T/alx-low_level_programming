#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - hiiiiippa
 * Description: ba7bou7i
 * @n: int
 * Return: a + b
 */
int print_to_98(int n)
{
printf("%d", n);
while (n > 98)
{
n--;
printf(", %d", n);
}
while (n < 98)
{
n++;
printf(", %d", n);
}
}
