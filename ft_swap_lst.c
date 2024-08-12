#include "libft.h"

void	ft_swap_lst(t_list *lst)
{
	void	*tmp;

	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
}