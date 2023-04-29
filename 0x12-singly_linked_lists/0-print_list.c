#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * This function prints all the elements of a linked list of type list_t
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	for (; h; h = h->next, count++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	
	return count;
}
