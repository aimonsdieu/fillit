/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 09:22:13 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/13 22:26:30 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_printnbr(long int n, int fd)
{
	if (n < 10)
	{
		ft_putchar_fd((n % 10) + 48, fd);
		return ;
	}
	else
	{
		ft_printnbr(n / 10, fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	long int	tmp;

	if (fd < 0)
		return ;
	tmp = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	tmp = (long int)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp = -((long int)n);
	}
	ft_printnbr(tmp, fd);
}
