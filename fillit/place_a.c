/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_spot.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 22:39:01 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/16 22:41:49 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	ft_first_dot_pos(const char **s, char index)
{
	int		i;
	int		j;
	size_t	len;

	index = index + 1;
	len = ft_strlen(*s);
	i = index / len;
	j = index % len;
	while (i < len)
	{
		while (j < len)
		{
			if (*(*(s + i) + j) == '.')
				return (i * len + j);
			j++;
		}
		i++;
	}
	return (-1);
}

char		ft_place_o(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j + 1 < len && s[i][j + 1] == '.'\
			&& s[i + 1][j] == '.' && s[i + 1][j + 1] == '.')
			if (tetra->type == O_TETRA)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_ih(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 3 < len && s[i + 1][j] == '.'\
			&& s[i + 2][j] == '.' && s[i + 3][j] == '.')
			if (tetra->type == I_TETRA_H)
			{
				s[i][j] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j] = alpha_order;
				s[i + 3][j] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_iv(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (j + 3 < len && s[i][j + 1] == '.'\
			&& s[i][j + 2] == '.' && s[i][j + 3] == '.')
			if (tetra->type == I_TETRA_V)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i][j + 2] = alpha_order;
				s[i][j + 3] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_tn(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j + 2 < len && s[i][j + 1] == '.'\
			&& s[i][j + 2] == '.' && s[i + 1][j + 1] == '.')
			if (tetra->type == T_TETRA_NOR)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i][j + 2] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}
