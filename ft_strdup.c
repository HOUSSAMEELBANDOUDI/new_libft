/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:50:30 by hel-band          #+#    #+#             */
/*   Updated: 2023/11/07 21:04:06 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(s1);
	dest = malloc(i + 1);
	if (!dest)
		return (0);
	ft_memcpy(dest, s1, i);
	dest[i] = '\0';
	return (dest);
}
