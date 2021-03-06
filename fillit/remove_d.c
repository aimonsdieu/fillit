/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 22:24:28 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/23 22:29:00 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_bool		ft_rm_lql(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j - 2] = '.';
	s[i + 1][j - 1] = '.';
	s[i + 1][j] = '.';
	return (true);
}

t_bool		ft_rm_jn(char **s, int index)
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
	s[i + 2][j - 1] = '.';
	return (true);
}

t_bool		ft_rm_jdr(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i][j + 1] = '.';
	s[i + 1][j] = '.';
	s[i + 2][j] = '.';
	return (true);
}

t_bool		ft_rm_jqr(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j] = '.';
	s[i + 1][j + 1] = '.';
	s[i + 1][j + 2] = '.';
	return (true);
}

t_bool		ft_rm_jql(char **s, int index)
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
	s[i + 1][j + 2] = '.';
	return (true);
}
