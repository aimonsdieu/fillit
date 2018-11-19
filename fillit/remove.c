#include "fillit.h"

static int		ft_rm_remaining(char **s, char type, int index)
{
	if (type == J_TETRA_NOR)
		return (ft_rm_jn(s, index));
	if (type == J_TETRA_DEMIR)
		return (ft_rm_jdr(s, index));
	if (type == J_TETRA_QUARTR)
		return (ft_rm_jqr(s, index));
	if (type == J_TETRA_QUARTL)
		return (ft_rm_jql(s, index));
	return (-1);
}

int				ft_remove(char **s, char type, int index)
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