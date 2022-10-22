/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:18:56 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/22 19:46:55 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\v' || c == '\t'
		|| c == '\r' || c == '\f' || c == '\n');
}

static int	ft_check(const char *str)
{
	if ((ft_strlen(str) >= 19)
		&& (ft_strncmp(str, "9223372036854775807", 19) >= 0))
		return (-1);
	if (ft_strlen(str) >= 20
		&& ft_strncmp(str, "-9223372036854775808", 20) >= 0)
		return (0);
	return (1);
}	

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	res;
	int	check;

	i = 0;
	neg = 1;
	res = 0;
	while (ft_isspace(str[i]))
		i++;
	check = ft_check(str);
	if (check != 1)
		return (check);
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		res = res * 10 + (str[i++] - '0');
	return (res * neg);
}
