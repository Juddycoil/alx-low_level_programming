#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/*
 *
 * hexadecimal
 * 0 1 2 3 4 5 6 7 8 9 a b c d e f
 */
int n;
int ch;

for (n = 48; n <= 57; n++)
{
	putchar(n);
}

for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}

putchar(10);

return (0);
}
