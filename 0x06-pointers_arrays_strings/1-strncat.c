/**
 * _strncat - concatenate string up to n
 * @dest: pass by ref
 * @src: pass by ref
 * @n: integer at most
 * Return: character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		++i;
	for (; j < n && src[j] ; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
