#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char		*tab;
	int			i;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return ((char *)tab);
}
