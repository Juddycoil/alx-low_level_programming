#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;

for (ch = 97; ch <= 122; ch++)
{
putchar(ch);
}
for (ch = 65; ch <= 90; ch++)
{
putchar(ch);
}
putchar(10);

return (0);
}
