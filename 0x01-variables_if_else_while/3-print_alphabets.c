#include <stdio.h>
/**
 * main - alphabet in lowercase, and then in uppercase
 * description - uses 2 for statement
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
ch = 'A';
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
