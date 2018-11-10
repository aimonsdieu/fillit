/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetraminos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 22:41:48 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/09 18:50:23 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int			ft_first_hash_pos(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (*(*(s + i) + j) == '#')
				return (i * 4 + j);
			j++;
		}
		i++;
	}
	return (-1);
}

char				ft_gettetra_type_a(char **s)
{
	int		i;
	int		j;
	int		index;

	index = ft_first_hash_pos(s);
	i = index / 4;
	j = index % 4;
	if (i + 1 < 4 && j + 1 < 4 && s[i][j + 1] == '#'\
		&& s[i + 1][j] == '#' && s[i + 1][j + 1] == '#')
		return (O_TETRA);
	if (i + 3 < 4 && s[i + 1][j] == '#'\
		&& s[i + 2][j] == '#' && s[i + 3][j] == '#')
		return (I_TETRA_V);
	if (j + 3 < 4 && s[i][j + 1] == '#'\
		&& s[i][j + 2] == '#' && s[i][j + 3] == '#')
		return (I_TETRA_H);
	if (i + 1 < 4 && j + 2 < 4 && s[i][j + 1] == '#'\
		&& s[i][j + 2] == '#' && s[i + 1][j + 1] == '#')
		return (T_TETRA_NOR);
	if (i + 1 < 4 && j + 1 < 4 && j - 1 >= 0 && s[i + 1][j - 1] == '#'\
		&& s[i + 1][j] == '#' && s[i + 1][j + 1] == '#')
		return (T_TETRA_INV);
	return (-1);
}

char				ft_gettetra_type_b(char **s)
{
	int		i;
	int		j;
	int		index;

	index = ft_first_hash_pos(s);
	i = index / 4;
	j = index % 4;
	if (i + 2 < 4 && j - 1 >= 0 && s[i + 1][j - 1] == '#'\
		&& s[i + 1][j] == '#' && s[i + 2][j] == '#')
		return (T_TETRA_LEFT);
	if (i + 2 < 4 && j + 1 < 4 && s[i + 1][j] == '#'\
		&& s[i + 2][j] == '#' && s[i + 1][j + 1] == '#')
		return (T_TETRA_RIGHT);
	if (i + 1 < 4 && j - 1 >= 0 && s[i][j + 1] == '#'\
		&& s[i + 1][j - 1] == '#' && s[i + 1][j] == '#')
		return (S_TETRA_NOR);
	if (i + 2 < 4 && j + 1 < 4 && s[i + 1][j] == '#'\
		&& s[i + 1][j + 1] == '#' && s[i + 2][j + 1] == '#')
		return (S_TETRA_TURNED);
	if (i + 1 < 4 && j + 2 < 4 && s[i][j + 1] == '#'\
		&& s[i + 1][j + 1] == '#' && s[i + 1][j + 2] == '#')
		return (Z_TETRA_NOR);
	return (-1);
}

char				ft_gettetra_type_c(char **s)
{
	int		i;
	int		j;
	int		index;

	index = ft_first_hash_pos(s);
	i = index / 4;
	j = index % 4;
	if (i + 2 < 4 && j - 1 >= 0 && s[i + 1][j - 1] == '#'\
		&& s[i + 1][j] == '#' && s[i + 2][j - 1] == '#')
		return (Z_TETRA_TURNED);
	if (i + 2 < 4 && j + 1 < 4 && s[i + 1][j] == '#'\
		&& s[i + 2][j] == '#' && s[i + 2][j + 1] == '#')
		return (L_TETRA_NOR);
	if (i + 2 < 4 && j + 1 < 4 && s[i][j + 1] == '#'\
		&& s[i + 1][j + 1] == '#' && s[i + 2][j + 1] == '#')
		return (L_TETRA_DEMIR);
	if (i + 1 < 4 && j + 2 < 4 && s[i][j + 1] == '#'\
		&& s[i][j + 2] == '#' && s[i + 1][j] == '#')
		return (L_TETRA_QUARTR);
	if (i + 1 < 4 && j - 2 >= 0 && s[i + 1][j - 2] == '#'\
		&& s[i + 1][j - 1] == '#' && s[i + 1][j] == '#')
		return (L_TETRA_QUARTL);
	return (-1);
}

char				ft_gettetra_type_d(char **s)
{
	int		i;
	int		j;
	int		index;

	index = ft_first_hash_pos(s);
	i = index / 4;
	j = index % 4;
	if (i + 2 < 4 && j - 1 >= 0 && s[i + 1][j] == '#'\
		&& s[i + 2][j] == '#' && s[i + 2][j - 1] == '#')
		return (J_TETRA_NOR);
	if (i + 2 < 4 && j + 1 < 4 && s[i][j + 1] == '#'\
		&& s[i + 1][j] == '#' && s[i + 2][j] == '#')
		return (J_TETRA_DEMIR);
	if (i + 1 < 4 && j + 2 < 4 && s[i + 1][j] == '#'\
		&& s[i + 1][j + 1] == '#' && s[i + 1][j + 2] == '#')
		return (J_TETRA_QUARTR);
	if (i + 1 < 4 && j + 2 < 4 && s[i][j + 1] == '#'\
		&& s[i][j + 2] == '#' && s[i + 1][j + 2] == '#')
		return (J_TETRA_QUARTL);
	return (-1);
}
