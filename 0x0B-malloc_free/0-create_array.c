#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array of char.
 * @size: input array size.
 * @c: input char value.
 * Return: an array of char.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size  == 0)
		return (NULL);
	str = (char *)malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	for (i = 0; i < size ; i++)
		str[i] = c;
	return (str);
}
