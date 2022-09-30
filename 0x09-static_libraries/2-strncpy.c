/**
 * _strncpy - copy the string to destination
 * @dest: pass by ref
 * @src: pass by ref
 * @n: mark end of copying
 * Return: pointer to a char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
