/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:18:56 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/05 13:19:31 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\v' || c == '\t'
		|| c == '\r' || c == '\f' || c == '\n');
}

int	ft_atoi(const char* n)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 1;
	res = 0;
	while (ft_isspace(n[i]))
		i++;
	if (n[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (n[i] == '+')
		i++;
	while (ft_isdigit(n[i]))
	{
		res = res * 10 + (n[i] - '0');
		i++;
	}
	return (res * neg);
}
