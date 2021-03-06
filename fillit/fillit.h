/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:06:53 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/23 22:32:54 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "../libft/libft.h"

# define MAX_SIDE 12

typedef enum		e_bool
{
	false,
	true
}					t_bool;

enum				e_type
{
	O_TETRA,

	I_TETRA_V,
	I_TETRA_H,

	T_TETRA_NOR,
	T_TETRA_INV,
	T_TETRA_LEFT,
	T_TETRA_RIGHT,

	S_TETRA_NOR,
	S_TETRA_TURNED,

	Z_TETRA_NOR,
	Z_TETRA_TURNED,

	L_TETRA_NOR,
	L_TETRA_DEMIR,
	L_TETRA_QUARTR,
	L_TETRA_QUARTL,

	J_TETRA_NOR,
	J_TETRA_DEMIR,
	J_TETRA_QUARTR,
	J_TETRA_QUARTL
};

typedef struct		s_tetra
{
	char			*bloc[4];
	char			order;
	int				type;
	int				pos;
	struct s_tetra	*next;
}					t_tetra;

int					ft_gettetra_type_a(char **s);
int					ft_gettetra_type_b(char **s);
int					ft_gettetra_type_c(char **s);
int					ft_gettetra_type_d(char **s);

t_tetra				*ft_get_next_tetra(int fd, char order);
t_tetra				*ft_gettetraminos(int fd);
void				ft_deltetraminos(t_tetra *first_tetra);

char				**ft_get_area(void);
void				ft_increase_area(char **area);
void				ft_remove_tetra(char **square, char type, size_t index);
t_bool				ft_fillit(t_tetra *t, t_tetra *f, char **square, int pos);

t_bool				ft_place_o(char **s, int index, t_tetra *tetro);
t_bool				ft_place_iv(char **s, int index, t_tetra *tetro);
t_bool				ft_place_ih(char **s, int index, t_tetra *tetro);
t_bool				ft_place_tn(char **s, int index, t_tetra *tetro);
t_bool				ft_place_tr(char **s, int index, t_tetra *tetro);
t_bool				ft_place_tl(char **s, int index, t_tetra *tetro);
t_bool				ft_place_ti(char **s, int index, t_tetra *tetro);
t_bool				ft_place_sn(char **s, int index, t_tetra *tetro);
t_bool				ft_place_si(char **s, int index, t_tetra *tetro);
t_bool				ft_place_zn(char **s, int index, t_tetra *tetro);
t_bool				ft_place_zi(char **s, int index, t_tetra *tetro);
t_bool				ft_place_ln(char **s, int index, t_tetra *tetro);
t_bool				ft_place_ldr(char **s, int index, t_tetra *tetro);
t_bool				ft_place_lqr(char **s, int index, t_tetra *tetro);
t_bool				ft_place_lql(char **s, int index, t_tetra *tetro);
t_bool				ft_place_jn(char **s, int index, t_tetra *tetro);
t_bool				ft_place_jdr(char **s, int index, t_tetra *tetro);
t_bool				ft_place_jqr(char **s, int index, t_tetra *tetro);
t_bool				ft_place_jql(char **s, int index, t_tetra *tetro);

t_bool				ft_place_tetra(char **s, int index, t_tetra *t);

t_bool				ft_rm_o(char **s, int index);
t_bool				ft_rm_iv(char **s, int index);
t_bool				ft_rm_ih(char **s, int index);
t_bool				ft_rm_tn(char **s, int index);
t_bool				ft_rm_tr(char **s, int index);
t_bool				ft_rm_tl(char **s, int index);
t_bool				ft_rm_ti(char **s, int index);
t_bool				ft_rm_sn(char **s, int index);
t_bool				ft_rm_si(char **s, int index);
t_bool				ft_rm_zn(char **s, int index);
t_bool				ft_rm_zi(char **s, int index);
t_bool				ft_rm_ln(char **s, int index);
t_bool				ft_rm_ldr(char **s, int index);
t_bool				ft_rm_lqr(char **s, int index);
t_bool				ft_rm_lql(char **s, int index);
t_bool				ft_rm_jn(char **s, int index);
t_bool				ft_rm_jdr(char **s, int index);
t_bool				ft_rm_jqr(char **s, int index);
t_bool				ft_rm_jql(char **s, int index);

t_bool				ft_remove(char **square, char type, int index);

#endif
