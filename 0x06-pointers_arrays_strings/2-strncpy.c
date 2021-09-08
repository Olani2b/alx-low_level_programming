#inlcude "main.h"
/**
 * _strncpy - copies a string
 * @src: the source of the string
 * @dest: the destination of the string
 * @n: the maximum number of bytes
 * Return: return the pointer to a string destination
 */

char *_strncpy(char *dest, char *src, int n)
{
int index;
for (index = 0; index < n && src[index] != '\0'; index++)
{
dest[index] = src[index];
}
dest[index + 1] = '\0';
return (dest);
}
