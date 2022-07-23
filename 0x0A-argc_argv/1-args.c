#include <stdio.h>

/**
* main - prints the number of arguments passed into it
* @argc: number of count
* @argv: pointer to array param
* Return: Success
*/

int main(int argc, char *argv[])

{
	printf("%d\n", argc - 1);
	argv++;
	return (0);
}
