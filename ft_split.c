/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:04:49 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/27 13:03:42 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freeall(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static int	ft_count(char const *s, char c)
{
	size_t		i;
	size_t		k;
	size_t		len;
	int			count;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		while (i++ < len)
			if (c == s[i])
				break ;
		k = i;
		while (i++ < len)
			if (!(c == s[i]))
				break ;
		if (i > k)
			count++;
	}
	return (count);
}

char	*ft_allocstr(char const *str, char c, int j, char **arr)
{
	char	*sliced;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	sliced = (char *)malloc(sizeof(char) * i + 1);
	if (!sliced)
	{
		ft_freeall(arr, j);
		return (NULL);
	}
	i = 0;
	while (str[i] && str[i] != c)
	{
		sliced[i] = str[i];
		i++;
	}
	sliced[i] = 0;
	return (sliced);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		j;

	if (!s)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!arr)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			arr[j] = ft_allocstr(s, c, j, arr);
			if (!arr[j])
				return (NULL);
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	arr[j] = NULL;
	return (arr);
}
