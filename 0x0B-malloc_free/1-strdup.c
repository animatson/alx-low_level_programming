#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - string duplicate function.
 * @str: input string.
 * Return: array of char.
 */
char *_strdup(char *str)
{
	char *s;

	if (!str)
		return (NULL);
	s = (char *)malloc(sizeof(char));
	if (!s)
		return (NULL);
	s = str;
	return (s);
}
