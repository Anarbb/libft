/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:04:49 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/12 23:12:56 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	**ft_split(char const *s, char c)
{
	// add strings to array
	char	**arr;
	size_t	i;
	size_t	k;
	size_t	len;
	int		count;

	i = 0;
	count = 0;
	len = ft_strlen(s);
	arr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!arr)
		return (0);
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
		{
			arr[count] = ft_substr(s, k, i - k);
			count++;
		}
	}
	arr[count] = NULL;
	return (arr);
}

int main()
{
	char *str = "Hello World";
	char **arr = ft_split(str, ' ');
	for (int i = 0; arr[i] != NULL; i++)
		printf("%s", arr[i]);
	return 0;
	
}