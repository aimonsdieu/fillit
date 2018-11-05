/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <pkabore@1337.ma>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 00:45:27 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/13 21:18:48 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			result;
	char		sign;
	const char	*s;
	int			i;

	i = 0;
	sign = 0;
	result = 0;
	s = str;
	while (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\r' || \
			*(s + i) == '\t' || *(s + i) == '\f' || *(s + i) == '\v')
		i++;
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		sign = *(str + i);
		i++;
	}
	while (ft_isdigit(*(str + i)))
	{
		result = result * 10 + (int)(*(str + i) - 48);
		i++;
	}
	if (sign == '-')
		return (-result);
	return (result);
}
