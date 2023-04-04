#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory where it is stored
 *@src: memory where it is copied to
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s;
	int i = n;

	for (s = 0; s < i; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
