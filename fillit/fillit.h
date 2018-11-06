#ifndef FILLI_H
# define FILLI_H

# include <fcntl.h>
# include "../libft/libft.h"

typedef enum	e_bool
{
	false,
	true
}				t_bool;

enum			e_tetra_type
{
	O_TETRA,

	I_TETRA_V,
	I_TETRA_H,

	T_TETRA_NOR,
	T_TETRA_INV,
	T_TETRA_LEFT,
	T_TETRA_RIGHT,

	S_TETRA,
	S_TETRA_TURNED,
	Z_TETRA,
	Z_TETRA_TURNED,

	L_TETRA_NOR,
	J_TETRA_NOR,
	L_TETRA_QUARTR,
	J_TETRA_QUARTR,
	L_TETRA_QUARTL,
	J_TETRA_QUARTL,
	L_TETRA_DEMIR,
	J_TETRA_DEMIR,
};

typedef struct	s_tetra
{
	char	bloc[4][4];
	char	type;
}				t_tetra;

t_tetra			*ft_gettetra(int fdes);
e_bool			is_tetra(t_tetra *tetra);
void			ft_deltetra(t_tetra *tetra);

#endif
