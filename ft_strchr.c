#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
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

