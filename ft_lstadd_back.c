/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tebandam <tebandam@student.42angouleme.fr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:45:06 by tebandam          #+#    #+#             */
/*   Updated: 2023/10/27 18:50:06 by tebandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr_last_element;

	if (!lst)
		return (NULL);
	ptr_last_element = lst;
	while (ptr_last_element->next != NULL)
	{
		ptr_last_element = ptr_last_element->next;
	}
	return (ptr_last_element);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr_last_element;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ptr_last_element = ft_lstlast(*lst);
	ptr_last_element->next = new;
}
