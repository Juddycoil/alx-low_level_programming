#include "main.h"
#include <string.h>

/**
* *_strncat - concatenates two strings
* @dest: string destination
* @src: source
* @n: bytes parameter
* Return: string to dest
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;

dest_len = strlen(dest);

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
