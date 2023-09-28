#include <stdlib.h>

int	ft_separator(char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	wd_count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && ft_separator(str[i], str))
			i++;
		if (str[i] && !ft_separator(str[i], str))
		{
			while (str[i] && !ft_separator(str[i], str))
			{
				i++;
			}
			count++;
		}
	}
	return (count);
}

char **ft_split(const char *s, char c)
{
	char	**tab;

	
}
