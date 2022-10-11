/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:26:21 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/11 18:54:27 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (*dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	srt;
	unsigned int	end;
	char			*str;

	end = ft_strlen(s1);
	srt = 0;
	while (s1[srt] && ft_isnset(s1[srt], set))
		srt++;
	while (s1[end] && ft_isnset(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - srt) + 1);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1 + srt);
	str[end - srt] = '\0';
	return ((char *)str);
}
