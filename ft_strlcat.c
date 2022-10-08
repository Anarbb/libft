/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:10:25 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/08 12:29:59 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*dest;

	dest = dst + ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (*src && dstsize > ft_strlen(dst) + 1)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
