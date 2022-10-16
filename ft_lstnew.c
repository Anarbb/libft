/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 10:50:30 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/10/16 12:06:44 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list *ptr;
	
	ptr = (void *)malloc(sizeof(struct s_list));
	if (!ptr)
		return (NULL);
	ptr->next = NULL;
	ptr->content = content;
	return (ptr);
}
