#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tab1;
	const unsigned char	*tab2;
	size_t				i;

	i = 0;
	tab1 = s1;
	tab2 = s2;
	while ((tab1[i] || tab2[i]) && (i < n))
	{
		if (tab1[i] != tab2[i])
			return (tab1[i] - tab2[i]);
		i++;
	}
	return (0);
}
