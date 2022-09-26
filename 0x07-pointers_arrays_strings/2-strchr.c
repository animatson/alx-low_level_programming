/**
 * _strchr - finding char in string
 * @s: pass by ref string
 * @c: pass by ref char
 * Return: pointer char* to c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
