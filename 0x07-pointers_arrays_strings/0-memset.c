#include "main.h"
#include <string.h>

/**
* *_memset - fills memory with a constant byte
* @s: memory dest
* @b: value
* @n: number of byte
* Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{

n = sizeof(b);

r = memset(s, b, n);

return (s);
}
