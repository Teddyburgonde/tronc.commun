#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*test1;

	test1 = (t_list *)malloc(sizeof(t_list));
	if (!test1)
		return (NULL);
	test1->content = content;
	test1->next = NULL;
	return (test1);
}
