/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 22:37:59 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/14 02:28:03 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*first_elem;
	int		i;

	i = 0;
	tmp = NULL;
	while (lst)
	{
		if (lst->next)
			if (!(tmp = (t_list *)malloc(sizeof(t_list))))
				return (NULL);
		tmp = f(lst);
		if (i == 0)
		{
			first_elem = tmp;
			i++;
		}
		lst = lst->next;
		tmp = tmp->next;
		tmp = NULL;
	}
	return (first_elem);
}
