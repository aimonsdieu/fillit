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

void	ft_debug(char **area, int pos)
{
	ft_putendl("");
	ft_display(area);
	ft_putstr("POS : ");
	ft_putnbr(pos);
	ft_putchar('\n');
}

t_bool	ft_fillit(t_tetra *tetra, t_tetra *first, char **area, int pos)
{
	int				len;
	t_tetra			*last;
	len = ft_strlen(*area);
	ft_debug(area, pos);
	while (pos < len * len)
	{
		if (ft_place_tetra(area, pos, tetra) >= 0)
		{
			if (tetra->next == NULL)
				return (true);
			last = tetra->next;
			//ft_debug(last->bloc, pos);
			if (ft_fillit(last, first, area, 0))
				return (true);
			else
			{	
				ft_debug(tetra->bloc, tetra->pos);
				ft_remove(area, tetra->type, tetra->pos);
				if (ft_fillit(tetra, first, area, tetra->pos + 1))
					return (true);
				ft_increase_area(area);
				if (ft_fillit(first, first, area, 0))
					return (true);
			}
		}
		pos++;
	}
	return (false);
}