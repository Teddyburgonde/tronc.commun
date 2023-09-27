#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (s1[i] != '\0' && set[j] != '\0')
	{

		while (s1[i] != set[j])
		{	
			tab[k] = s1[i];
			k++;
			i++;
		}
		i++;
		
	}
	//printf("la valeur de j %c\n", set[j]);
	tab[k] = '\0';
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	char *tab;

	char	s1[] = "en_coreduchocolatalacanti_en";
	char	set[] = "ea";
	tab = ft_strtrim(s1, set);
	printf("%s", tab);
}
