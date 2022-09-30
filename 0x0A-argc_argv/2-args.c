#include <stdio.h>
/**
 * main - entry point of a program.
 * @argc: argument count variable.
 * @argv: argument vector variable.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0 ; i < argc ; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
