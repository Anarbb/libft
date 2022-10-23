/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:16:55 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/23 14:18:12 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	unsigned char	*p;

	p = (unsigned char *) b;
	while (0 < len--)
	{
		*p++ = (unsigned char) c;
	}
	return (b);
}
