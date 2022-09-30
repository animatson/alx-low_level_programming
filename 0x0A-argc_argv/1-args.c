#include <stdio.h>
/**
 * main - entry point of a program.
 * @argc: argument count variable.
 * @argv: argument vector variable.
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc);
	return (0);
}
