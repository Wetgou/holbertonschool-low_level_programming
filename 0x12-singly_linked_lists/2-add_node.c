#include "lists.h"
#include <stdlib.h>

/**
 * _strcpy - copy a source input ont destinated input
 * @dest: target where will be stored the input
 * @src: source to copy from
 *
 *
 * Return: dest address
 * On error: -1 inapropiate entry
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + i) = *(src + i); /* adding '\0' character */

	return (dest);
}

/**
 * _strlen - function that returns the length of a string
 * @s: string address
 *
 *
 * Return: nothing
 * On error: -1 inapropiate entry
 */

int _strlen(char *s)
{
	return ((!*s) ? 0 : 1 + _strlen(s + 1));
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: source to copy
 *
 *
 * Return: address where is stored the result
 * On error: -1 inapropiate entry
 */

char *_strdup(char *str)
{
	char *arr;

	if (!str)
		return (NULL);

	arr = malloc((_strlen(str) * sizeof(*arr)) + 1);

	if (!arr)
		return (NULL);

	_strcpy(arr, str);

	return (arr);
}


/**
 * add_node - function that adds a new node at the beginning
 * of a list_t list
 * @head: start point address list to measure
 * @str: string to add
 *
 *
 * Return: the address of the new element, or NULL if it failed
 * On error: -1 inapropiate entry
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return  (NULL);

	new->str = _strdup((char *) str);
	new->len = _strlen((char *) str);
	new->next = (!*head) ? NULL : *head;

	*head = new;

	return (new);
}
