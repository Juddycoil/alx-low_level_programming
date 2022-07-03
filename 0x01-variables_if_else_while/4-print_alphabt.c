#include <stdio.h>

/**
 * main - Print all alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar(10);

return (0);
}
