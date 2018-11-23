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

t_bool		ft_rm_o(char **s, int index)
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
	s[i + 1][j + 1] = '.';
	return (true);
}

t_bool		ft_rm_iv(char **s, int index)
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
	s[i + 3][j] = '.';
	return (true);
}

t_bool		ft_rm_ih(char **s, int index)
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
	s[i][j + 3] = '.';
	return (true);
}

t_bool		ft_rm_tn(char **s, int index)
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
	s[i + 1][j + 1] = '.';
	return (true);
}