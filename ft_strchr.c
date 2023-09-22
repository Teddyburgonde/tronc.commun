#include <stddef.h>

char	*ft_strchr(char *s, int c)
{
	char	*stock;

	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
			if (s[i] == c)
			{
				while (s[i])
				{
					stock[j + i] = s[i];
					i++;
					j++;
				}
				return (&stock[j]);

			}
			i++;
	}
	return (NULL);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char test[] = "salut";
	int	c;

	c = 'a';
	printf("%s\n", strchr(test, c));
	printf("%s", ft_strchr(test, c));
}

