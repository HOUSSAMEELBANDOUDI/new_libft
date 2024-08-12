/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:39:19 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/13 15:25:34 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void*))
{
	t_list	*current;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		current = *lst;
		*lst = current->next;
		ft_lstdelone(current, del);
	}
}
