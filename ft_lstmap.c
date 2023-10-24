#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	new_element = ft_lstnew(f(lst->content));
	while (lst)
	{
		if (!new_element)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst ->next;
	}
	return (new_list);
}
