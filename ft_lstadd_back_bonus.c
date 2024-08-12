/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:32:40 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/09 21:46:01 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*old;

	if (!lst || !new)
		return ;
	if (*lst != NULL)
	{
		old = *lst;
		while (old->next)
			old = old->next;
		old->next = new;
	}
	else
		*lst = new;
}
