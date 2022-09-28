/**
 * factorial - calculate factorial of a number
 * @n: input number (as a value)
 * Return: integer factorial of number n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
