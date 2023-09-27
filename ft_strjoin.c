#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tab;

	tab = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!tab)
		return (NULL);
	else
	{
		tab = ft_strcat((char *)s1, (char *)s2);
		return (tab);
	}
}
