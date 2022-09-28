/**
 * _strlen_recursion - length of a string
 * @s: iput string
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
