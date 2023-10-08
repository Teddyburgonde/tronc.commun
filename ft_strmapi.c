#include <stdlib.h>

int	function1(int a, int b)
{
	return (a + b);
}

int	test(int a, int b)
{
	int	(*ptr)(int, int);
	int	x;

	ptr = &function1;
	x = ptr(a, b);
	return (x);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", test(10, 9));
}

/*
char	f(unsigned int i, char c)
{
	
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char ))
{





	char *tab;
	
	tab = malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (NULL);
	while (tab[i])
	{
		tab[i] = c;
		i++;
	}
	return(tab);

}
*/
