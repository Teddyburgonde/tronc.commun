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


char **ft_split(char const *s, char c)
{

}
