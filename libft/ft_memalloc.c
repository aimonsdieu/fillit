/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:57:19 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/06 03:04:31 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*ptr;

	if (!(ptr = malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		*((unsigned char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
