/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:26:21 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/09 16:57:49 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int ft_isnset(char c, const char *set)
{
	while (*set++)
	{
		if (c == *set)
			return (1);	
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	srt;
	unsigned int	end;
	char			*str;
	end = strlen(s1) - 1;
	srt = 0;
	while (s1[srt] && ft_isnset(s1[srt], set))
		srt++;
	while (s1[end] && ft_isnset(s1[end - 1], set))
		end--;
	if (srt > end)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (end - srt + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + srt, end - srt);
	str[end - srt] = '\0';
	return (str);
}

int main()
{
	
	char *str = "    Hello World    ";
	char *set = " ";
	char *ret = ft_strtrim(str, set);
	printf("%s", ret);
	return (0);
}
