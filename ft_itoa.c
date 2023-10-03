#include <stdlib.h>

// convert interger to string

int	ft_number_len(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		sign;
	int		len;

	sign = 0;
	len = ft_number_len(n);
	if (n < 0)
	{
		sign = 1;
	}
	if (sign == 1)
	{
		tab[0] = '-';
	}
	return (tab);
}


#include <stdio.h>


