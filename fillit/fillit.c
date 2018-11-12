/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:59:19 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/12 09:50:12 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_get_square(void)
{
	char	*square[20];
	size_t	i;

	i = 0;
	while (i < 20)
	{
		if (!(*(square + i) = ft_strnew(20)))
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
	if (i < 20)
		ft_memset(*(square + i), '.', len + 1);
}

t_bool	ft_is_wellfilled(char **square, size_t side)
{
	size_t	i;
	size_t	j;
	size_t	nb_dotup;
	size_t	nb_dotdown;

	i = 0;
	nb_dotup = 0;
	nb_dotdown = 0;
	while (i < side)
	{
		j = 0;
		while (j < side)
		{
			if (j < side - i - 1 && *(*(square + i) + j) == '.')
				nb_dotup++;
			else if (*(*(square + i) + j) == '.')
				nb_dotdown++;
			j++;
		}
		i++;
	}
	if (nb_dotup > nb_dotdown)
		return (false);
	return (true);
}

void	ft_swap(t_tetra tetraminos)
{

}

t_bool	ft_fillit(t_tetra *tetraminos, size_t pos)
{
	size_t	i;
	char	**square;

	if (tetraminos == NULL)
		return (true);
	i = 0;
	while (tetraminos)
	{
		
	}
	if (ft_fillit(tetraminos, pos))
}
