/**
 * _isupper - check if character is in capital letter
 * @c: params for character value
 * Return: 1 if true or 0 if not
 */
int _isupper(int c)
{
	if ((c <= 90) && (c >= 65))
		return (1);
	else
		return (0);
}
