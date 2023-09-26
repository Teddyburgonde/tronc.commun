#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*ptr_dest;
	const char	*ptr_src;
	size_t		i;

	ptr_dest = dest;
	ptr_src = src;
	i = 0;
	if (ptr_dest == ptr_src)
		return (dest);
	while (i < len)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}
