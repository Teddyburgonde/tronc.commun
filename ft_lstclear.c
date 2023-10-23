#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!*lst || !del)
		return ;
	ptr = *lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
	free(ptr);
}
