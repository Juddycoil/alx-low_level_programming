#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: memory dest
* @b: value
* @n: number of byte
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;

for (x = 0; x < n; x++)

s[x] = b;

return (s);
}
