#include <stdio.h>

/**
 * main - finds and print the sum of even valuesd terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long int j, k, next, sum;
int i;

j = 1;
k = 2;
sum = 0;

for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
}
{
sum = sum + j;
}
next = j + k;
j = k;
k = next;
{
printf("%lu\n", sum);
}
return (0);
}
