/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:53:26 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/07 21:05:59 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *str, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(str));
	i = 0;
	while (str[i] && i < dstsize - 1)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(str));
}
