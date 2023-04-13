#include <stdlib.h>

/**
 * _str_duplicate - duplicate a string into a new memory location
 * @src: string to be duplicated
 * Return: pointer to new duplicated string, or NULL if memory allocation failed
 */

char *_str_duplicate(char *src)
{
	char *dup_str;
	int i, len = 0;

	if (src == NULL)
	{
		return NULL;
	}

	while (src[len] != '\0')
	{
		len++;
	}

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
	{
		return NULL;
	}

	for (i = 0; i < len; i++)
	{
		dup_str[i] = src[i];
	}

	dup_str[i] = '\0';

	return dup_str;
}
