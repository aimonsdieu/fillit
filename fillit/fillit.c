/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:59:19 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/20 12:11:59 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

char	**ft_get_area(void)
{
	char	**area;
	size_t	i;

	i = 0;
	if (!(area = malloc(MAX_SIDE * sizeof(char *))))
		return (NULL);
	while (i < MAX_SIDE)
	{
		if (!(*(area + i) = ft_strnew(MAX_SIDE)))
			return (NULL);
		i++;
	}
	(void)ft_memcpy(*area, "..", 2);
	(void)ft_memcpy(*(area + 1), "..", 2);
	return (area);
}

void	ft_increase_area(char **area)
{
	size_t 	i;
	size_t	len;

	i = 0;
	len = ft_strlen(*area);
	while (i <= len && i < MAX_SIDE)
	{
		ft_memset(*(area + i), '.', len + 1);
		i++;
	}
}

t_bool	ft_fillit(t_tetra *tetra, t_tetra *first, char **area, int pos)
{
	int				len;

	len = ft_strlen(*area);
	if (tetra == NULL)
		return (true);
	while (pos < len * len)
	{
		if (ft_place_tetra(area, pos, tetra))
		{
			if (ft_fillit(tetra->next, first, area, 0))
				return (true);
			ft_remove(area, tetra->type, tetra->pos);
			if (ft_fillit(tetra, first, area, tetra->pos + 1))
				return (true);
			if (tetra != first)
				return (false);
			ft_increase_area(area);
			if (ft_fillit(first, first, area, 0))
				return (true);
		}
		pos++;
	}
	return (false);
}