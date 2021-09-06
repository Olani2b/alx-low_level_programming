#include "main.h"
/**
*swap_int - swaps the values of two integers
*@a: the first integer to be swaped
*@b: the second integer to be swaped
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
