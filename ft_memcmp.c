/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:23:30 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/08 13:47:52 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	while (n--)
	{
		str1 = (unsigned char *) s1++;
		str2 = (unsigned char *) s2++;
		if (str1 != str2)
			return (s1 - s2);
		if (str1 && str2 == '\0')
			return (0);
	}
	return (0);
}
