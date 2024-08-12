/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:16:25 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/11 15:34:05 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (!s1 && !s2)
		return (NULL);
	if (s2 < s1 && (s2 + len) > s1)
		while (len--)
			s1[len] = s2[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
