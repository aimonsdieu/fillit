/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:28:57 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/09 15:15:15 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_bool	ft_hasfour_hash(char **bloc)
{
	size_t	i;
	size_t	j;
	size_t	nb_hash;

	i = 0;
	nb_hash = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (*(*(bloc + i) + j) == '#')
				nb_hash++;
			j++;
		}
		i++;
	}
	if (nb_hash != 4)
		return (false);
	return (true);
}

static t_bool	ft_iswell_filled(char *s)
{
	if ((*s != '.' && *s != '#') || \
		(*(s + 1) != '.' && *(s + 1) != '#') || \
		(*(s + 2) != '.' && *(s + 2) != '#') || \
		(*(s + 3) != '.' && *(s + 3) != '#'))
		return (false);
	return (true);
}

static char		ft_scantetra_type(char **s)
{
	char	type;

	type = ft_gettetra_type_a(s);
	if (type >= 0)
		return (type);
	type = ft_gettetra_type_b(s);
	if (type >= 0)
		return (type);
	type = ft_gettetra_type_c(s);
	if (type >= 0)
		return (type);
	type = ft_gettetra_type_d(s);
	if (type >= 0)
		return (type);
	return (-1);
}

static char		ft_istetra(char **s)
{
	size_t	i;

	i = 0;
	while (i < 4)
	{
		if (ft_strlen(*(s + i)) != 4)
			return (-1);
		if (!ft_iswell_filled(*(s + i)))
			return (-1);
		i++;
	}
	if (!ft_hasfour_hash(s))
		return (-1);
	return (ft_scantetra_type(s));
}

t_tetra			*ft_get_next_tetra(int fd, char order)
{
	t_tetra		*tetra;
	int			st;
	size_t		i;
	char		tetra_type;

	i = 0;
	if (!(tetra = (t_tetra *)malloc(sizeof(t_tetra))))
		return (tetra);
	while (i < 4 && (st = get_next_line(fd, tetra->bloc + i)) > 0)
		i++;
	tetra_type = ft_istetra(tetra->bloc);
	if (st == 1 && tetra_type >= 0)
	{
		tetra->type = tetra_type;
		tetra->alpha_order = 'A' + order;
		tetra->next = NULL;
		return (tetra);
	}
	free(tetra);
	return (NULL);
}
