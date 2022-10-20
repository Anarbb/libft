/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:16:25 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/20 13:44:50 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n--)
	{
		u1 = *s1++;
		u2 = *s2++;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0' && u2 == '\0')
			return (0);
	}
	return (0);
}
