#inlcude "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character
 * @s: input string
 * @c: input character
 *
 * Return: *s
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}
if (!c)
{
return (s);
}
return (NULL);
}
