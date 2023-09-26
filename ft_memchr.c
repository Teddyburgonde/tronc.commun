#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*tab;
	size_t		i;

	i = 0;
	tab = s;
	while (i < n)
	{
		if (tab[i] == c)
			return ((void *)tab);
		i++;
	}
	return (NULL);
}
