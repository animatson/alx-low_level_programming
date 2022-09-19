/**
 * _strcpy - for copying
 * @dest: pass by ref
 * @src: pass by ref
 * Return: ref copy
 */
char *_strcpy(char *dest, char *src)
{
	int len, i, j;

	len = 0;
	i = 0;
	j = 0;
	while (src[i++] != '\0')
		len++;
	for (; j < len ; j++)
		dest[j] = src[j];
	dest[len] = '\0';
	return (dest);
}
