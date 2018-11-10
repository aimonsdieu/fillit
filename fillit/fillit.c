/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 01:59:19 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/10 03:58:53 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_get_square(void)
{
	char	*square[20];
	size_t	i;

	i = 0;
	while (i < 20)
	{
		if (!(*(square + i) = ft_strnew(20)))
			return (NULL);
		i++;
	}
	return (square);
}

int		ft_is_wellfilled(char **square)
{
	
}


