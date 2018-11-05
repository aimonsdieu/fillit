/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 01:33:26 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/14 00:32:17 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwds(char const *s, char c)
{
	size_t i;
	size_t len;
	size_t nb_wds;

	i = 1;
	len = ft_strlen(s);
	nb_wds = 0;
	if (len == 1 && *s != c)
		return (1);
	if (*s != c)
		nb_wds++;
	while (i < len)
	{
		if (*(s + i - 1) == c && *(s + i) != c)
			nb_wds++;
		i++;
	}
	return (nb_wds);
}

static size_t	ft_strleni(char const *str, char c)
{
	size_t i;

	i = 0;
	while (*(str + i) != c && *(str + i))
		i++;
	return (i);
}

static size_t	cp(size_t *ind, char const *s, char **tab, char c)
{
	size_t	size;

	size = ft_strleni(s, c);
	if ((*(tab + *ind) = ft_strnew(size)))
		*(tab + *ind) = ft_strncpy(*(tab + *ind), s, size);
	*ind = *ind + 1;
	return (size - 1);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	nb_wds;
	size_t	index;
	char	**tab;

	if (!s)
		return (NULL);
	nb_wds = ft_countwds(s, c);
	if (!(tab = (char **)malloc((nb_wds + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	index = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
			i += cp(&index, s + i, tab, c);
		i++;
	}
	*(tab + nb_wds) = NULL;
	return (tab);
}
