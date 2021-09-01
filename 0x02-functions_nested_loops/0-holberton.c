#include "main.h"
/**
 * main - prints Holberton
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char s[] = "Holberton";
while (s[i])
{
_putchar (s[i]);
i++;
}
_putchar ("\n");
return (0);
}
