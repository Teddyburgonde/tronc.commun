#include <stdlib.h>

int	ft_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	wd_count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && ft_separator(str[i], charset))
			i++;
		if (str[i] && !ft_separator(str[i], charset))
		{
			while (str[i] && !ft_separator(str[i], charset))
			{
				i++;
			}
			count++;
		}
	}
	return (count);
}

char	*ft_strdup(const char *str, char *charset)
{
	char	*tab;
	int		i;

	i = 0;
	while (str[i] && !ft_separator(str[i], charset))
		i++;
	tab = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_separator(str[i], charset))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char **ft_split(const char *s, char c)
{
	char	**tab;

	
}
