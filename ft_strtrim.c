#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] && is_in_set(s1[i], set))
			i++;
	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_in_set(s1[j], set))
		j--;
	tab = malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (i <= j)
	{
		tab[k] = s1[i];
		k++;
		i++;
	}
	tab[k] = '\0';
	return (tab);
}
