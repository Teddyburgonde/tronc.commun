#include "libft.h"

int	is_whitespace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

void	ft_init(int *i, int *a, int *sign)
{
	*i = 0;
	*a = 0;
	*sign = 1;
}

void	script_sign(const char *str, int *i, int *sign)
{
	while ((str[*i] == '+' || str[*i] == '-') || *sign == 0)
	{
		if (str[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	sign;

	ft_init(&i, &a, &sign);
	while (is_whitespace(str[i]))
		i++;
	script_sign(str, &i, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == -1)
		{
			if (a < (-2147483648 - (str[i] - '0')) / 10)
				return (0);
		}
		else if (a > (2147483647 - (str[i] - '0')) / 10)
		{
			if (a > (4294967295 - (str[i] - '0')) / 10)
				return (0);
			return (-1);
		}
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (a * sign);
}
