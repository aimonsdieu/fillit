/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 02:02:47 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/08 10:15:32 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;
	size_t len;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	len = ft_strlen(needle);
	while (*(haystack + i))
	{
		if (*(haystack + i) == *needle)
			if (!ft_strncmp(haystack + i, needle, len))
				return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
