/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 22:01:14 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/23 17:08:19 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**tmp;

	if (!alst)
		return ;
	if (!(tmp = (t_list **)malloc(sizeof(t_list *))))
		return ;
	while (*alst)
	{
		*tmp = *alst;
		*alst = (*alst)->next;
		ft_lstdelone(tmp, del);
	}
}
