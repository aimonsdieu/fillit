/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:11:54 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/09 09:38:15 by mcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_deltetraminos(t_tetra *first_tetra)
{
	t_tetra		*deleted_tetra;

	while (first_tetra)
	{
		deleted_tetra = first_tetra;
		first_tetra = first_tetra->next;
		free(*(deleted_tetra->bloc));
		free(*(deleted_tetra->bloc + 1));
		free(*(deleted_tetra->bloc + 2));
		free(*(deleted_tetra->bloc + 3));
		free(deleted_tetra);
	}
}

static char	ft_check_nl(t_tetra *first_tetra, char *line)
{
	if (*line != 0)
	{
		ft_deltetraminos(first_tetra);
		free(line);
		return (-1);
	}
	return (0);
}

static void	ft_add_tetra(t_tetra **first_tetra, t_tetra *tetra)
{
	if (!tetra)
		return ;
	if (*first_tetra == NULL)
	{
		*first_tetra = tetra;
		return ;
	}
	tetra->next = *first_tetra;
	*first_tetra = tetra;
}

t_tetra		*ft_gettetraminos(int fd)
{
	t_tetra		*tetra;
	t_tetra		*first_tetra;
	int			st;
	char		*line;
	char		order;

	st = 1;
	order = 0;
	first_tetra = NULL;
	while (st == 1)
	{
		if (!(tetra = ft_get_next_tetra(fd, order)))
		{
			ft_deltetraminos(first_tetra);
			return (NULL);
		}
		ft_add_tetra(&first_tetra, tetra);
		st = get_next_line(fd, &line);
		if (ft_check_nl(first_tetra, line) == -1)
			return (NULL);
		++order;
		free(line);
	}
	return (first_tetra);
}
