/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:45:02 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/13 21:32:08 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;
	char	*s;
	char	*d;

	i = 0;
	if (!(tmp = (char *)malloc(len)))
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	while (i < len)
	{
		*(tmp + i) = *(s + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(d + i) = *(tmp + i);
		i++;
	}
	return (dst);
}
