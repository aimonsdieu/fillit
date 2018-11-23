/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_c.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 22:24:42 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/23 22:24:45 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_bool		ft_rm_zn(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i][j + 1] = '.';
	s[i + 1][j + 1] = '.';
	s[i + 1][j + 2] = '.';
	return (true);
}

t_bool		ft_rm_zi(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j - 1] = '.';
	s[i + 1][j] = '.';
	s[i + 2][j - 1] = '.';
	return (true);
}

t_bool		ft_rm_ln(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j] = '.';
	s[i + 2][j] = '.';
	s[i + 2][j + 1] = '.';
	return (true);
}

t_bool		ft_rm_ldr(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i][j + 1] = '.';
	s[i + 1][j + 1] = '.';
	s[i + 2][j + 1] = '.';
	return (true);
}

t_bool		ft_rm_lqr(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i][j + 1] = '.';
	s[i][j + 2] = '.';
	s[i + 1][j] = '.';
	return (true);
}
