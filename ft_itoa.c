#include <stdlib.h>

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

int	cut(int n, int pos)
{
	int	i;

	i = 0;
	while (i < pos - 1)
	{
		n /= 10;
		i++;
	}
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}

void	initialize_value(int *sign, int *i)
{
	*sign = 0;
	*i = 0;
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		len;
	int		sign;
	int		i;

	initialize_value(&sign, &i);
	len = ft_number_len(n);
	if (n < 0)
	{
		sign = 1;
		i = 1;
		len++;
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	if (sign == 1)
		tab[0] = '-';
	while (i < len)
	{
		tab[i] = cut(n, len - i) + '0';
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
