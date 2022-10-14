/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:08:56 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/14 13:14:21 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getintlen(int value)
{
	int	l;
	int	neg;

	l = 1;
	neg = 1;
	if (value < 0)
	{
		value *= -1;
		neg = -1;
	}
	while (value > 9)
	{
		l++;
		value /= 10;
	}
	if (neg == -1)
	{
		return (l + 1);
	}
	return (l);
}

static int	ft_isneg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*instr;
	int		neg;

	neg = ft_isneg(n);
	len = ft_getintlen(n);
	instr = (char *)malloc((sizeof(char) * len) + 1);
	if (n == -2147483648)
		return (ft_strcpy(instr, "-2147483648"));
	if (!instr)
		return (NULL);
	if (neg == -1)
		n *= -1;
	instr[len--] = 0;
	if (n == 0)
		instr[len--] = 48;
	while (n)
	{
		instr[len--] = ((n % 10) + 48);
		n /= 10;
	}
	if (neg == -1)
		instr[len] = '-';
	return (instr);
}
