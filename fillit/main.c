/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:59:35 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/23 20:05:57 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_display(char **square)
{
	char	i;

	i = 0;
	while (**(square + i))
	{
		ft_putendl(*(square + i));
		i++;
	}
}

void	ft_free_space(char **square)
{
	int	i;

	i = 0;
	while (i < MAX_SIDE)
	{
		free(square[i]);
		i++;
	}
	free(square);
	square = NULL;
}

int		main(int argc, char **argv)
{
	int			fd;
	t_tetra		*tetra;
	char		**square;

	if (argc != 2)
	{
		ft_putendl("usage: ./fillit fillit_file");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	square = ft_get_area();
	if (fd < 0 || square == NULL)
		return (0);
	tetra = ft_gettetraminos(fd);
	if (tetra == NULL || close(fd))
	{
		ft_putendl("error");
		return (0);
	}
	while (!ft_fillit(tetra, tetra, square, 0))
		ft_increase_area(square);
	ft_display(square);
	ft_deltetraminos(tetra);
	ft_free_space(square);
	return (0);
}
