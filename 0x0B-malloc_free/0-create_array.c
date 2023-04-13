#include <stdlib.h>

/**
 * create_char_array - create an array of characters of specified size and initialize each element with specified character
 * @size: size of the array
 * @char_val: character to initialize each element with
 *
 * Return: pointer to the created array, or NULL if size is 0 or memory allocation failed
 */

char *create_char_array(unsigned int size, char char_val)
{
	char *char_arr;
	unsigned int i;

	char_arr = malloc(sizeof(char) * size);

	if (size == 0 || char_arr == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size; i++)
	{
		char_arr[i] = char_val;
	}
	return char_arr;
}
