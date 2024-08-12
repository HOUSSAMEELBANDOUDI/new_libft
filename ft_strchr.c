/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:51:22 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/03 20:30:41 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	uc;

	uc = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == uc)
			return ((char *) &s[i]);
		i++;
	}
	if (!uc)
		return ((char *) &s[i]);
	return (NULL);
}
