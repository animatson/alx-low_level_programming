/**
 * _memset - copy char to string.
 * @s: pass by ref string
 * @b: pass by ref char
 * @n: pass by value u-int
 * Return: a string already copied
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n ; i++)
		s[i] = b;
	return (s);
}
