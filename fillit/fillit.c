/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:59:19 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/17 01:00:22 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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

void	ft_debug(char **area)
{
	ft_putendl("");
	ft_display(area);
	ft_putendl("");
}

t_bool	ft_fillit(t_tetra *tetra, t_tetra *first, char **area, int pos)
{
	int		len;

	len = (int)ft_strlen(*area);
	while (pos < len * len)
	{
		if (ft_place_tetra(area, pos, tetra) >= 0)
		{
			ft_debug(area);
			if (tetra->next == NULL)
				return (true);
			if (ft_fillit(tetra->next, first, area, 0))
				return (true);
			else if (pos == tetra->pos && pos)
			{
				ft_remove(area, tetra->type, tetra->pos);
				pos = tetra->pos;
			}
			if (ft_fillit(tetra, first, area, pos + 1))
				return (true);
		}
		pos++;
		if (pos == len * len - 1)
		{
			ft_increase_area(area);
			if (ft_fillit(first, first, area, 0))
				return (true);
		}
	}
	return (false);
}