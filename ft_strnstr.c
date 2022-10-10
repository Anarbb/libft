/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:42:22 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/10 22:48:30 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	slen;

	slen = ft_strlen(needle);
	if (!*needle || !len)
		return (char *)haystack;
	if (slen > (size_t)ft_strlen(haystack))
		return (NULL);
	while (*haystack && len)
	{
		nlen = ft_strlen(needle);
		while (*needle && *haystack && (*haystack == *needle))
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
/*
int main()
{
	char *big = "abcdef";
	char *little = "abcdefghijklmnop";
	size_t max = strlen(big);
	char *s1 = strnstr(big, little, max);
	char *s2 = ft_strnstr(big, little, max);

	if (s1 == s2)
		exit(0);
	exit(-1);
}
*/