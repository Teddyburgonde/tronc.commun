#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	size_t		i;
	char		*ptr_dest;
	const char	*ptr_src;

	ptr_src = src;
	ptr_dest = dest;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
