/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:42:22 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/08 11:13:10 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	slen;

	slen = ft_strlen(needle);
	while (*haystack && len)
	{
		nlen = ft_strlen(needle);
		while ((*haystack == *needle))
		{
			needle++;
			haystack++;
			len--;
			nlen--;
			if (nlen == 0)
			{
				return ((char *)(haystack - slen));
			}
		}
		haystack++;
		len--;
	}
	return (0);
}
