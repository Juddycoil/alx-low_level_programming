#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{


int i;
int ch;

for (i = '0'; i <= '9'; i++)
{

	putchar(i);
}

for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}

putchar(10);

return (0);
}
