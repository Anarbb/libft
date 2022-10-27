/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:08:56 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/27 13:05:56 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getintlen(int value)
{
	int	len;

	len = 0;
	if (value == 0)
		return (1);
	if (value < 0)
	{
		len++;
		value *= -1;
	}
	while (value > 0)
	{
		value /= 10;
		len++;
	}
	return (len);
}

static int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;
	
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	neg = ft_isneg(n);
	len = ft_getintlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
