#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*tab;

	tab = s;
	i = 0;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}
