#include "main.h"

/**
* print_last_digit - return last digit
* @n : number to check
* Return:the last digiy
*/

int print_last_digit(int n)
{
	int x;
	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
