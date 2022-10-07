/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 22:55:40 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/07 12:20:18 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t ret;
	ret = ft_strlen(src);
	
	if (ret + 1 < dstsize)
	{
		ft_memcpy(dst, src, ret + 1);
	}
	else if (dstsize != 0) {
		ft_memcpy(dst, src, ret - 1);
		dst[ret - 1] = '\0';
	}
	return (ret);
}
