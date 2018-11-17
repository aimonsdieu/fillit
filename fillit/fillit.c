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
	while (i <= len)
	{
		ft_memset(*(square + i), '.', len + 1);
		i++;
	}
}

int		ft_place_tetra(char **square, char type)
{
	
}

void	ft_remove_tetra(char **square, char type, size_t index)
{
	if (ft_remove_type_a(square, type, index))
		return ;
	if (ft_remove_type_b(square, type, index))
		return ;
	if (ft_remove_type_c(square, type, index))
		return ;
	ft_remove_type_d(square, type, index);
}

t_bool	ft_fillit(t_tetra *tetra, char **square, char pos)
{
	size_t len;

	len = ft_strlen(*square)
	if (tetra == NULL)
		return (true);
	while (pos < len)
	{
		if ((pos = ft_place_tetra(square, tetra->type)))
		{
			if (ft_fillit(tetra->next, square, pos + 1))
				return (true);
			else
			{
				ft_remove_tetra(square, tetra->type, pos);
				if (ft_fillit(tetra, square, pos + 1))
					return (true);
			}
		}
	}
	ft_increase_area(square);
	if (ft_fillit(square, tetra, 0))
		return (true);
}
