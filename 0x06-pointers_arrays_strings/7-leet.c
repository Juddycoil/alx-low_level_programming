#include "main.h"

/**
* *leet - encodes a string into leet
* @s: string param
* Return: a string
*/
char *leet(char *s)
{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char trl[5] = {'4', '3', '0', '7', '1'};

while (s[a])
{
	b = 0;

	while (b < l)
{
	if (s[a] == tr[b] || s[a] - 32 == tr[b])
{		s[a] = trl[b];
		b++;
}
}
a++;

}
return (s);

}
