/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 00:19:25 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/12 01:44:31 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_strlimits(char const *s, size_t *start, size_t *end)
{
	size_t	i;

	i = 0;
	while (*(s + i) < 33 && *(s + i))
		i++;
	*start = i;
	if (*start == 0 && *s == 0)
		i = 1;
	else
		i = ft_strlen(s) - 1;
	while (*(s + i) < 33 && i >= *start)
		i--;
	*end = i;
}

char			*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	ft_strlimits(s, &start, &end);
	if (start == 0 && *s == 0)
		return (ft_strnew(1));
	if ((str = ft_strnew(end - start + 1)))
	{
		i = 0;
		while (start <= end)
		{
			*(str + i) = *(s + start);
			start++;
			i++;
		}
	}
	return (str);
}
