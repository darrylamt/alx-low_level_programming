#include "main.h"
/**
 * _strcmp - compares the values of two strings
 * @s1: pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 *
 * Return: An integer less than, equal to, or greater than zero if s1 is
 *         found, respectively, to be less than, to match, or be greater
 *         than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;


	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
