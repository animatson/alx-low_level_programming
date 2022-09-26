/**
 * _strspn - counting func
 * @s: pass by ref
 * @a: pass by ref
 * Return: counts
 */
unsigned int _strspn(char *s, char *a)
{
	int i = 0, j = 0;
	unsigned int count = 0;

	for (; s[i] != '\0' ; i++)
	{
		for (; a[j] != '\0' ; j++)
		{
			if (s[i] == a[j])
				++count;
		}
	}
	return (count);
}
