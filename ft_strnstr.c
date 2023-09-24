#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, int len)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (i >= len)
				break ;
			if(to_find[j + 1] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}


#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	size_t max_len = strlen(argv[1]);
	if (argc == 3)
	{
		printf("%s\n", ft_strnstr(argv[1], argv[2], max_len));
		printf("%s", strnstr(argv[1], argv[2], max_len));
		//printf("%s\n", ft_strnstr(argv[1], argv[2], 5));
		//printf("%s", strnstr(argv[1], argv[2], 5));
	}
}
