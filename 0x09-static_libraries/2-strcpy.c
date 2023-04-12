#include "main.h"

/**
 * _strncpy - Copies a string
 *
 * Copies at most 'n' bytes of the string pointed to by 'src' to the buffer
 * pointed to by 'dest'. If the length of 'src' is less than 'n', the
 * remaining bytes in 'dest' are filled with null characters ('\0').
 *
 * @dest: Pointer to the buffer to which the string is copied
 * @src: Pointer to the string to be copied
 * @n: Maximum number of bytes to be copied
 *
 * Return: Pointer to 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;


	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);
}
