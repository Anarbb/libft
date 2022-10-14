/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:08:56 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/14 10:29:21 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getintlen(int value)
{
  int l;

  l = 1;
  while (value > 9)
	{
		l++;
		value /= 10;
	}
  return (l);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*instr;

	i = ft_getintlen(n);
	instr = (char *)malloc(sizeof(char) * i);
	if (!instr)
		return (NULL);
	while (n)
	{
		printf("%d\n", n%10);
		n /= 10;
	}
	return 0;
}

