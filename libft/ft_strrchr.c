/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 05:58:08 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/05 21:28:11 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = (int)ft_strlen(s);
	ch = (char)c;
	while (i >= 0)
	{
		if (*(s + i) == ch)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
