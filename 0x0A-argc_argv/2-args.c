#include <stdio.h>

/**
* main - prints all arguments it receives
* @argc: count
* @argv: array
* Return: Success
*/

int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
