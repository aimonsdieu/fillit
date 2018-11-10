/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:07:11 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/06 19:07:17 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"



e_bool	ft_iswell_filled(char *s)
{
	if ((*s != '.' && *s != '#') || \
		(*(s + 1) != '.' && *(s + 1) != '#') || \
		(*(s + 2) != '.' && *(s + 2) != '#') || \
		(*(s + 3) != '.' && *(s + 3) != '#'))
		return (false);
	return (true);
}

int		ft_istetra(t_tetra *tetra)
{
	size_t	i;

	i = 0;
	while (i < 4)
	{
		if (ft_strlen(*(tetra->bloc + i)) != 4)
			return (-1);
		if (!ft_iswell_filled(*(tetra->bloc + i)))
			return (-1);
	}
}

t_tetra		*ft_gettetra(int fd)
{
	t_tetra		*tetra;
	int			st;
	size_t		i;
	int			tetra_type;

	i = 0;
	if (!(tetra = (t_tetra *)malloc(sizeof(*tetra))))
		return (tetra);
	while ((st = get_next_line(fd, tetra->bloc + i)) == 1 && i < 4)
		;
	if (st == 1 && (tetra_type = ft_istetra(tetra)) >= 0)
	{
		tetra->type = tetra_type;
		return (tetra);
	}
	free(tetra);
	return (NULL);
}
