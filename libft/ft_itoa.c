/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 08:18:23 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/13 21:10:26 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countdgts(int n)
{
	size_t nb_dgts;

	nb_dgts = 0;
	if (n <= 0)
		nb_dgts++;
	while (n || n % 10)
	{
		nb_dgts++;
		n /= 10;
	}
	return (nb_dgts);
}

char			*ft_itoa(int n)
{
	size_t	i;
	char	*nb;
	char	sign;

	sign = '.';
	if (!(nb = ft_strnew(ft_countdgts(n))))
		return (nb);
	i = ft_countdgts(n) - 1;
	if (n < 0)
	{
		*nb = '-';
		sign = '-';
	}
	if (n == 0)
		*nb = '0';
	while (n || n % 10)
	{
		*(nb + i) = (n % 10) + 48;
		if (sign == '-')
			*(nb + i) = -(n % 10) + 48;
		n /= 10;
		i--;
	}
	return (nb);
}
