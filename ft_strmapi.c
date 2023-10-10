#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	change(unsigned int i, char c)
{
	if (i == 0 || i != '\0')
		return ('X');
	return (c);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*tab;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
