#include "main.h"
#include <string.h>

/**
* *_strstr -  locates a substring and the NULL byte are not compared
* @haystack: string param
* @needle: param
* Return: a string or NULL
*/
char *_strstr(char *haystack, char *needle)
{

return (strstr(haystack, needle));
}
