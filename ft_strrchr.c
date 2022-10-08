/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:53:32 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/08 11:13:25 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*st;

	st = s + ft_strlen(s);
	while (*st-- != c)
	{
		if (st < s)
			return (NULL);
		if (*st == c)
		{
			return ((char *)st);
		}
	}
	return (NULL);
}
