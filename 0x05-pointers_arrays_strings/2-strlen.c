/**
 * _strlen - returns a strings value
 * @s: take a string to be counted
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len = len + 1;
	return (len);
}
