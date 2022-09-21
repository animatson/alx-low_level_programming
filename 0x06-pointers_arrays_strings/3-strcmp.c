/**
 * _strcmp - compare s1 and s2
 * @s1: pass by ref
 * @s2: pass by ref
 * Return: 15, -15 or 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0' && s2[i] != '\0' ; i++)
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
		else
			continue;
	}
	return (0);
}
