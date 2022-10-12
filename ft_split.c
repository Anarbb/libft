/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:04:49 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/12 22:30:50 by aarbaoui         ###   ########.fr       */
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
	char	*str;
	int		count;
	size_t	len;
	size_t	i;

	i = 0;
	count = ft_count(s, c);
	str = (char *)malloc(sizeof(char *) * count);
	len = ft_strlen(s);
	while (i < len)
	{
		while (i++ < len)
			if (c == s[i])
				break ;
		str[i] = ft_substr(s, i, len);
		while (i++ < len)
			if (!(c == s[i]))
				break ;
	}
	// return pointer to pointer to char
	return (**str);
}

int main()
{
  // test the function
  char s[] = "To be, or not to be, that is the question.";
  int count_strings = 0;
  char **split_strings = ft_split(s, ' ');
  while (split_strings[count_strings] != NULL)
	printf("%s", split_strings[count_strings++]);
  return 0;
}