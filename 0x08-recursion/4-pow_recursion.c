/**
 * _pow_recursion - calculate the exponential function.
 * @x: input value as base
 * @y: input value as exponent
 * Return: power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
