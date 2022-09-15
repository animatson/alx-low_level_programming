/**
 * _isdigit - check if a number is digit for real
 * @c: params for interger value
 * Return: 1 if true or 0 if not
 */
int _isdigit(int c)
{
	if ((c <= 9) && (c >= 0))
		return (1);
	else
		return (0);
}
