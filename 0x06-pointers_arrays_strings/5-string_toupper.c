#include "main.h"

/**
* *string_toupper - convert lowercase in a string to uppercase
* @ch: param
* Return: string
*/
char *string_toupper(char *ch)
{
int a = 0;

while (ch[a])
{
if (ch[a] >= 97 && ch[a] <= 122)
ch[a] = ch[a] - 32;
a++;

}
return (ch);
}
