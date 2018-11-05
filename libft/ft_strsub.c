/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 23:36:50 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/12 01:41:35 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*str;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (start >= len_s || start + len > len_s)
		return (ft_strncpy(str, s, len_s));
	if (len == 0)
		str = ft_strncpy(str, s + start, len + 1);
	else
		str = ft_strncpy(str, s + start, len);
	return (str);
}
