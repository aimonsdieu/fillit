/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 12:17:16 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/07 21:46:07 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	if (!(new_elem = (t_list *)malloc(sizeof(*new_elem))))
		return (new_elem);
	if (content == NULL)
	{
		new_elem->content = NULL;
		new_elem->content_size = 0;
		new_elem->next = NULL;
		return (new_elem);
	}
	if ((new_elem->content = malloc(content_size)))
		(void)ft_memcpy((*new_elem).content, content, content_size);
	new_elem->content_size = content_size;
	new_elem->next = NULL;
	return (new_elem);
}
