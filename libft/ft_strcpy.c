/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 03:27:21 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/05 03:32:40 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (*(src + i))
	{
		*(dst + i) = *(src + i);
		++i;
	}
	*(dst + i) = '\0';
	return (dst);
}
