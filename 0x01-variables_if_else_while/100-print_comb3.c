#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int n;

for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; ch++)
{
if (n > ch)
{
putchar(ch);
putchar(n);

if (ch != 56 || n != 57)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10); /*ASCII for new line */

return (0);

}
