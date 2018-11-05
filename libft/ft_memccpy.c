/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 21:02:37 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/14 00:08:42 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*dest;
	const unsigned char		*source;
	unsigned char			data;

	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	data = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(source + i);
		if (*(dest + i) == data)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
