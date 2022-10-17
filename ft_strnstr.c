/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:42:22 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/17 20:39:29 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	slen;
	slen = ft_strlen(needle);

	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (*haystack && len && !(slen > (size_t)ft_strlen(haystack)))
	{
		nlen = ft_strlen(needle);
		while (*needle && *haystack && (*haystack == *needle))
		{
			needle++;
			haystack++;
			len--;
			nlen--;
			if (nlen == 0)
				return ((char *)(haystack - slen));
		}
		haystack++;
		len--;
	}
	return (NULL);
}
