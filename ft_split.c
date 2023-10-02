#include <stdlib.h>

int	ft_separator(char c, char charset)
{
	return (c == charset);
}

int	wd_count_words(char const *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!ft_separator(str[i], charset))
		{
			count++;
			while (str[i] && !ft_separator(str[i], charset))
				i++;
		}
		i++;
	}
	return (count);
}

char	*ft_strdup(const char *str, char charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && !ft_separator(str[i], charset))
		i++;
	word = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && !ft_separator(str[i], charset))
	{	
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (wd_count_words(str, c) + 1));
	while (str[i])
	{
		while (str[i] && ft_separator(str[i], c))
			++i;
		if (str[i] && !ft_separator(str[i], c))
		{
			tab[j] = ft_strdup(&(str[i]), c);
			j++;
			while (str[i] && !ft_separator(str[i], c))
			++i;
		}
	}
	tab[j] = 0;
	return (tab);
}
