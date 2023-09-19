#include <stddef.h>
#include <stdio.h>


void	*ft_memcpy(void *restrict dest, void *restrict src, size_t n)
{
	size_t i;
	char	*d;
	char	*s;
	i = 0;
	
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}	

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[] = "bonjour";
	char	src[] = "salut";
	memcpy(dest, src, 3);
	//ft_memcpy(dest, src, 2);
	printf("%s", dest);
}
