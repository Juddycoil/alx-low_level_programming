#include <stdio.h>

/**
 * main - Print all alphabet in lowercase except q && e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'q' && ch != 'e')
{
	putchar(ch);
}
}
putchar(10);
retrun(0);
}
