#include "ft_is_negative.h"
#include <unistd.h>

void ft_is_negative(int n)
{
	char result;
	
	if (n >= 0) {
		result = 'P';
	}
	else {
		result = 'N';
	}

	write(1, &result, 1);
}
