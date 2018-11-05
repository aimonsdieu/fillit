/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 02:52:27 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/14 03:00:14 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_factorial(int n)
{
	long long int result;

	result = 1;
	if (n < 0)
		return (0);
	while (n >= 1)
	{
		result *= n;
		n--;
	}
	return (result);
}
