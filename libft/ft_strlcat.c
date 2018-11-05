/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:06:48 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/05 21:13:08 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_dst;
	size_t len_src;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	while (*(dst + i) && i < size)
		++i;
	if (i == size)
		return (size + len_src);
	j = 0;
	while (j + len_dst < size - 1 && *(src + j))
	{
		*(dst + i + j) = *(src + j);
		j++;
	}
	*(dst + i + j) = '\0';
	return (len_dst + len_src);
}
