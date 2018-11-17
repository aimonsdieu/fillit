/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 11:57:26 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/16 15:04:23 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_bool		ft_remove_type_a(char **square, char type, size_t index)
{
	int		i;
	int		j;

	i = index / 4;
	j = index % 4;
	if (type == O_TETRA && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i + 1][j] = '.' && s[i + 1][j + 1] = '.'))
		return (true);
	if (type == I_TETRA_V && (s[i][j] = '.' && s[i + 1][j] = '.' &&\
		s[i + 2][j] = '.' && s[i + 3][j] = '.'))
		return (true);
	if (type == I_TETRA_H && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i][j + 2] = '.' && s[i][j + 3] = '.'))
		return (true);
	if (type == T_TETRA_NOR && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i][j + 2] = '.' && s[i + 1][j + 1] = '.'))
		return (true);
	if (type == T_TETRA_INV && (s[i][j] = '.' && s[i + 1][j - 1] = '.' &&\
		s[i + 1][j] = '.' && s[i + 1][j + 1] = '.'))
		return (true);
	return (false);
}

t_bool		ft_remove_type_b(char **square, char type, size_t index)
{
	int		i;
	int		j;

	i = index / 4;
	j = index % 4;
	if (type == T_TETRA_LEFT && (s[i][j] = '.' && s[i + 1][j - 1] = '.' &&\
		s[i + 1][j] = '.' && s[i + 2][j] = '.'))
		return (true);
	if (type == T_TETRA_RIGHT && (s[i][j] = '.' && s[i + 1][j] = '.' &&\
		s[i + 2][j] = '.' && s[i + 1][j + 1] = '.'))
		return (true);
	if (type == S_TETRA_NOR && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i + 1][j - 1] = '.' && s[i + 1][j] = '.'))
		return (true);
	if (type == S_TETRA_TURNED && (s[i][j] = '.' && s[i + 1][j] = '.' &&\
		s[i + 1][j + 1] = '.' && s[i + 2][j + 1] = '.'))
		return (true);
	if (type == Z_TETRA_NOR && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i + 1][j + 1] = '.' && s[i + 1][j + 2] = '.'))
		return (true);
	return (false);
}

t_bool		ft_remove_type_c(char **square, char type, size_t index)
{
	int		i;
	int		j;

	i = index / 4;
	j = index % 4;
	if (type == Z_TETRA_TURNED && (s[i][j] = '.' && s[i + 1][j - 1] = '.' &&\
		s[i + 1][j] = '.' && s[i + 2][j - 1] = '.'))
		return (true);
	if (type == L_TETRA_NOR && (s[i][j] = '.' && s[i + 1][j] = '.' &&\
		s[i + 2][j] = '.' && s[i + 2][j + 1] = '.'))
		return (true);
	if (type == L_TETRA_DEMIR && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i + 1][j + 1] = '.' && s[i + 2][j + 1] = '.'))
		return (true);
	if (type == L_TETRA_QUARTR && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i][j + 2] = '.' && s[i + 1][j] = '.'))
		return (true);
	if (type == L_TETRA_QUARTL && (s[i][j] = '.' && s[i + 1][j - 2] = '.' &&\
		s[i + 1][j - 1] = '.' && s[i + 1][j] = '.'))
		return (true);
	return (false);
}

t_bool		ft_remove_type_d(char **square, char type, size_t index)
{
	int		i;
	int		j;

	i = index / 4;
	j = index % 4;
	if (type == J_TETRA_NOR && (s[i][j] = '.' && s[i + 1][j] = '.' &&\
		s[i + 2][j] = '.' && s[i + 2][j - 1] = '.'))
		return (true);
	if (type == J_TETRA_DEMIR && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i + 1][j] = '.' && s[i + 2][j] = '.'))
		return (true);
	if (type == J_TETRA_QUARTR && (s[i][j] = '.' && s[i + 1][j] = '.' &&\
		s[i + 1][j + 1] = '.' && s[i + 1][j + 2] = '.'))
		return (true);
	if (type == J_TETRA_QUARTL && (s[i][j] = '.' && s[i][j + 1] = '.' &&\
		s[i][j + 2] = '.' && s[i + 1][j + 2] = '.'))
		return (true);
	return (false);
}
