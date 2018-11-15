/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:59:19 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/15 20:14:44 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_get_square(void)
{
	char	*square[MAX_SIDE];
	size_t	i;

	i = 0;
	while (i < MAX_SIDE)
	{
		if (!(*(square + i) = ft_strnew(MAX_SIDE)))
			return (NULL);
		i++;
	}
	(void)ft_memcpy(*square, "..", 2);
	(void)ft_memcpy(*(square + 1), "..", 2);
	return (square);
}

void	ft_increase_area(char **square)
{
	size_t 	i;
	size_t	len;

	i = 0;
	len = ft_strlen(*square);
	while (i < len)
	{
		*(*(square + i) + len) = '.';
		i++;
	}
	if (i < MAX_SIDE)
		ft_memset(*(square + i), '.', len + 1);
}

t_bool	ft_fillit(t_tetra *tetraminos, square)
{
	if (tetraminos == NULL)
		return (true);
	while (tetraminos)
	{
		if (ft_place_tetra(square, tetraminos))
		{
			if (ft_fillit(tetraminos->next, square))
				return (true);
			else
			{
				ft_remove_tetra(tetraminos, index);
				if (ft_fillit(tetraminos->next, square))
					return (true);
			}
		}
		else if (ft_fillit(tetraminos->next, square))
			return (true);
	}
	if (tetraminos == NULL)
	{
		ft_increase_area(square);
		return (false);
	}
}
