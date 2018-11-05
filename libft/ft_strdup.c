/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 04:27:00 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/12 01:22:30 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*copy;
	size_t		len;

	len = ft_strlen(s1);
	if (!(copy = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	copy = ft_strcpy(copy, s1);
	return (copy);
}
