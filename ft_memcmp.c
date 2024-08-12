/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:54:10 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/07 19:16:52 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*dst;
	size_t			i;

	if (!n)
		return (0);
	i = 0;
	str = (unsigned char *)s1;
	dst = (unsigned char *)s2;
	while (i < n && str[i] == dst[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (str[i] - dst[i]);
}
