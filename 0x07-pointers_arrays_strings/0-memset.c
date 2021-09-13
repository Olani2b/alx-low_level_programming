#include "main.h"
/**
 * _memset - fills memory
 * @s: string to be filled
 * @b: intput
 * @n: size
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
