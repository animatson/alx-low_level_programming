/**
 * swap_int - swapping value a to b, b to a
 * @a: pass by ref
 * @b: pass by ref
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
