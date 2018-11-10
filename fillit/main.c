/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:59:35 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/09 18:51:02 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_puttetra(t_tetra *tetra)
{
	char	i;
	char	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (*(*(tetra->bloc + i) + j) != '.')
				ft_putchar(tetra->alpha_order);
			else
				ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(void)
{
	int			fd;
	t_tetra		*tetra;

	fd = open("sample.fillit", O_RDONLY);
	tetra = ft_gettetraminos(fd);
	while (tetra)
	{
		ft_puttetra(tetra);
		tetra = tetra->next;
		if (tetra)
			ft_putchar('\n');
	}
	return (0);
}
