/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 22:22:44 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/23 22:22:57 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_bool		ft_rm_remaining(char **s, char type, int index)
{
	if (type == J_TETRA_NOR)
		return (ft_rm_jn(s, index));
	if (type == J_TETRA_DEMIR)
		return (ft_rm_jdr(s, index));
	if (type == J_TETRA_QUARTR)
		return (ft_rm_jqr(s, index));
	if (type == J_TETRA_QUARTL)
		return (ft_rm_jql(s, index));
	if (type == T_TETRA_NOR)
		return (ft_rm_tn(s, index));
	if (type == T_TETRA_INV)
		return (ft_rm_ti(s, index));
	if (type == T_TETRA_LEFT)
		return (ft_rm_tr(s, index));
	if (type == T_TETRA_RIGHT)
		return (ft_rm_tr(s, index));
	return (false);
}

t_bool				ft_remove(char **s, char type, int index)
{
	if (type == O_TETRA)
		return (ft_rm_o(s, index));
	if (type == I_TETRA_V)
		return (ft_rm_iv(s, index));
	if (type == I_TETRA_H)
		return (ft_rm_ih(s, index));
	if (type == S_TETRA_NOR)
		return (ft_rm_sn(s, index));
	if (type == S_TETRA_TURNED)
		return (ft_rm_si(s, index));
	if (type == Z_TETRA_NOR)
		return (ft_rm_zn(s, index));
	if (type == Z_TETRA_TURNED)
		return (ft_rm_zi(s, index));
	if (type == L_TETRA_NOR)
		return (ft_rm_ln(s, index));
	if (type == L_TETRA_DEMIR)
		return (ft_rm_ldr(s, index));
	if (type == L_TETRA_QUARTR)
		return (ft_rm_lqr(s, index));
	if (type == L_TETRA_QUARTL)
		return (ft_rm_lql(s, index));
	return (ft_rm_remaining(s, type, index));
}
