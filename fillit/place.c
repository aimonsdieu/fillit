#include "fillit.h"

static int		ft_place_remaining(char **s, int index, t_tetra *t)
{
	if (t->type == J_TETRA_NOR)
		return (ft_place_jn(s, index, t));
	if (t->type == J_TETRA_DEMIR)
		return (ft_place_jdr(s, index, t));
	if (t->type == J_TETRA_QUARTR)
		return (ft_place_jqr(s, index, t));
	if (t->type == J_TETRA_QUARTL)
		return (ft_place_jql(s, index, t));
	return (-1);
}

int				ft_place_tetra(char **s, int index, t_tetra *t)
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