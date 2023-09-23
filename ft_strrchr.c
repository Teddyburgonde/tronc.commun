/*
char	*ft_strrchr(const char *s, int c)
{

}
*/

#include <string.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%s", strrchr(argv[1], 'a'));
	}

}
