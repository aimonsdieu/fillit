/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 10:35:40 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/11 04:31:04 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		if (*(haystack + i) == *needle)
			if (!ft_strncmp(haystack + i, needle, len_needle) && \
				len_needle <= len - i)
				return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
