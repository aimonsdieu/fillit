/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 22:23:08 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/23 22:23:12 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_bool		ft_place_remaining(char **s, int index, t_tetra *t)
{
	if (t->type == J_TETRA_NOR)
		return (ft_place_jn(s, index, t));
	if (t->type == J_TETRA_DEMIR)
		return (ft_place_jdr(s, index, t));
	if (t->type == J_TETRA_QUARTR)
		return (ft_place_jqr(s, index, t));
	if (t->type == J_TETRA_QUARTL)
		return (ft_place_jql(s, index, t));
	if (t->type == T_TETRA_NOR)
		return (ft_place_tn(s, index, t));
	if (t->type == T_TETRA_INV)
		return (ft_place_ti(s, index, t));
	if (t->type == T_TETRA_LEFT)
		return (ft_place_tr(s, index, t));
	if (t->type == T_TETRA_RIGHT)
		return (ft_place_tr(s, index, t));
	return (false);
}

t_bool				ft_place_tetra(char **s, int index, t_tetra *t)
{
	if (t->type == O_TETRA)
		return (ft_place_o(s, index, t));
	if (t->type == I_TETRA_V)
		return (ft_place_iv(s, index, t));
	if (t->type == I_TETRA_H)
		return (ft_place_ih(s, index, t));
	if (t->type == S_TETRA_NOR)
		return (ft_place_sn(s, index, t));
	if (t->type == S_TETRA_TURNED)
		return (ft_place_si(s, index, t));
	if (t->type == Z_TETRA_NOR)
		return (ft_place_zn(s, index, t));
	if (t->type == Z_TETRA_TURNED)
		return (ft_place_zi(s, index, t));
	if (t->type == L_TETRA_NOR)
		return (ft_place_ln(s, index, t));
	if (t->type == L_TETRA_DEMIR)
		return (ft_place_ldr(s, index, t));
	if (t->type == L_TETRA_QUARTR)
		return (ft_place_lqr(s, index, t));
	if (t->type == L_TETRA_QUARTL)
		return (ft_place_lql(s, index, t));
	return (ft_place_remaining(s, index, t));
}
