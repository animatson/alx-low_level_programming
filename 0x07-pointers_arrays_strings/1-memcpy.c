/**
 * _memcpy - copy to dest address
 * @dest: pass by ref
 * @src: pass by ref
 * @n: pass by value
 * Return: character dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n = 0;

	for (; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
