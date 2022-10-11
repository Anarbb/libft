/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:33:03 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/10 23:23:26 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sbstr;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		len = 0;
	s += start;
	sbstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!sbstr)
		return (0);
	ft_strlcpy(sbstr, s, len + 1);
	return (sbstr);
}