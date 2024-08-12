/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:38:42 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/11 21:32:47 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0' || needle == haystack)
		return ((char *)haystack);
	if (!len)
		return (0);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
			j++;
		if (needle[j] == '\0')
			return ((char *)haystack + i);
		j = 0;
		i++;
	}
	return (0);
}
