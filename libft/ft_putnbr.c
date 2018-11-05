/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 09:22:13 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/13 23:09:56 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_printnbr(long int n)
{
	if (n < 10)
	{
		ft_putchar((n % 10) + 48);
		return ;
	}
	else
	{
		ft_printnbr(n / 10);
		ft_putchar((n % 10) + 48);
	}
}

void			ft_putnbr(int n)
{
	long int	tmp;

	tmp = 0;
	if (n == 0)
	{
		ft_putchar('0');
		return ;
	}
	tmp = (long int)n;
	if (n < 0)
	{
		ft_putchar('-');
		tmp = -((long int)n);
	}
	ft_printnbr(tmp);
}
