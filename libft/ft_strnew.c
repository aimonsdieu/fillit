/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 22:16:28 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/12 01:24:00 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	if (!(str = (char *)malloc(size + 1)))
		return (NULL);
	i = 0;
	if (size == 0)
	{
		*str = 0;
		return (str);
	}
	while (i <= size)
	{
		*(str + i) = '\0';
		++i;
	}
	return (str);
}
