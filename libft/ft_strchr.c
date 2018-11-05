/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 05:46:33 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/05 21:28:46 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (*(s + i))
	{
		if (*(s + i) == ch)
			return ((char *)s + i);
		i++;
	}
	if (ch == 0)
		return ((char *)s + i);
	return (NULL);
}
