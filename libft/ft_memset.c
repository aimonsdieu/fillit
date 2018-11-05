/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 04:33:39 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/11 02:02:44 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*zone;
	unsigned char	data;

	data = (unsigned char)c;
	zone = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		*(zone + i) = data;
		i++;
	}
	return (b);
}
