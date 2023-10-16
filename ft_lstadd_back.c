#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr_last_element;

	ptr_last_element = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
		return ;
	}
	while (ptr_last_element != NULL)
	{
		ptr_last_element = ptr_last_element->next;
	}
	ptr_last_element->next = new;
	new->next = NULL;
}
