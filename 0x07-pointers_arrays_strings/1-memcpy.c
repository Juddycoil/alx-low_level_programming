#include "main.h"
#include <string.h>

/**
* *_memcpy - copies memory area
* @dest: destination param
* @src: source param
* @n: byte size
* Return: string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

n = sizeof(src);

memcpy(dest, src, n);

return (dest);
}
