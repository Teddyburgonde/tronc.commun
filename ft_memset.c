void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	char			*tab;

	tab = s;
	i = 0;
	while (i < n)
	{
		tab[i] = c;
		i++;
	}
	return (s);
}
