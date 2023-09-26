int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	sign;

	i = 0;
	a = 0;
	sign = 1;
	while (str[i] == 32)
		i++;
	while ((str[i] == '+' || str[i] == '-') && sign == 0)
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (a * sign);
}
