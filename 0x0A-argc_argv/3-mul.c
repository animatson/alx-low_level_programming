#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of a program.
 * @argc: argument count variable.
 * @argv: argument vector variable.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
