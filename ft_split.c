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

char	*ft_strdup(char *str, char *charset)
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

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (wd_count_words(str, charset) + 1));
	while (str[i])
	{
		while (str[i] && ft_separator(str[i], charset))
			++i;
		if (str[i] && !ft_separator(str[i], charset))
		{
			tab[j] = ft_strdup(&(str[i]), charset);
			j++;
			while (str[i] && !ft_separator(str[i], charset))
				++i;
		}
	}
	tab[j] = 0;
	return (tab);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	char	**tab;

	(void)argc;
	i = 0;
	tab = ft_split(argv[1], argv[2]);
	while (tab[i])
	{
		printf("|%s| ", tab[i]);
		i++;
	}
	free(tab);
}
