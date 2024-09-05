#include "ft_print_comb.h"
#include <unistd.h>

void write_comb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void write_separator(void)
{
	static char comma = ',';
	static char space = ' ';

	write(1, &comma, 1);
	write(1, &space, 1);
}

void ft_print_comb(void)
{
	char n0 = '0';
	char n1 = '1';
	char n2 = '2';

	write_comb(n0, n1, n2);

	while (1)
	{
		n2++;

		if (n2 > '9') {
			n1++;

			if (n1 > '8') {
				n0++;
				n1 = n0 + 1;

				if (n0 == '8') {
					break;
				}
			}

			n2 = n1 + 1;
		}

		write_separator();
		write_comb(n0, n1, n2);
	}
}
