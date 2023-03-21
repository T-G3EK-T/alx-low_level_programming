#include <stdio.h>
#include "main.h"

/**
 * main - haw haw 
 * Description: ha fakh fakh
 * Return: sriiiiw
*/

int main(void)
{
unsigned long int x, y, z, i;
x = 1;
y = 1;
z = y;
for (i = 0; i < 50; i++)
{
printf("%lu", z);
z = x + y;
x = y;
y = z;
if (i == 49)
{
continue;
}
printf(", ");
}
	return (0);
}