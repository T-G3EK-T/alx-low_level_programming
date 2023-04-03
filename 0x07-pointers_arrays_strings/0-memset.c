#include "main.h"

/**
 * _memset - a function that fills
 * @s: input pointer to char type
 * @b: input variable of char type
 * @n: unsigned int variable
 * Return: tisaaaaa3
*/

char *_memset(char *s, char b, unsigned int n)
{
	/**
	 * declare an unsigned int
	 * because we are storing a
	 * value that will always be
	 * non-negative (zero or positive)
	*/
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}