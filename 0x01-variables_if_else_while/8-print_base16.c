#include <stdio.h>

/**
 * main - print all number of base sixteen in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
char letter;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
{
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
}
putchar(10);

return (0);

}
