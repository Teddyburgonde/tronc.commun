#include "ft.h"
#include <stdio.h>

int	main(void)
{
	int	c;
	int	result;

	c = 0;
	result = c >= '0' && c <= '9';
	if (result >= '0' && result <= '9')
		printf("test reussi");
	else
		printf("Echec");
}
