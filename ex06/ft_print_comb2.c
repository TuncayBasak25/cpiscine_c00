#include "ft_print_comb2.h"
#include <unistd.h>

void ft_put

void print_number(int n)
{
	char left_digit = '0';
	char right_dight = '0';

	while (n > 9)
	{
		n -= 10;
		left_digit++;
	}

	right_digit += n;

	write(1, &left_digit, 1);
	write(1, &right_digit, 1);
}

void ft_print_comb2(void)
{

