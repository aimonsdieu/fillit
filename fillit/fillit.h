/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:06:53 by pkabore           #+#    #+#             */
/*   Updated: 2018/11/16 21:52:10 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include "../libft/libft.h"

# define MAX_SIDE 11

typedef enum		e_bool
{
	false,
	true
}					t_bool;

enum				e_tetra_type
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
	char			type;
	char			alpha_order;
	struct s_tetra	*next;
}					t_tetra;

char				ft_gettetra_type_a(char **s);
char				ft_gettetra_type_b(char **s);
char				ft_gettetra_type_c(char **s);
char				ft_gettetra_type_d(char **s);

t_tetra				*ft_get_next_tetra(int fd, char order);
t_tetra				*ft_gettetraminos(int fd);
void				ft_deltetraminos(t_tetra *first_tetra);

char				**ft_get_square(void);
t_bool				ft_place_tetra(char **square, t_tetra *tetra);
void				ft_remove_tetra(char **square, char type, size_t index);
t_bool				ft_fillit(t_tetra *tetra, char **square, char pos);

t_bool				ft_place_type_a(char **square, char type, size_t index);
t_bool				ft_place_type_b(char **square, char type, size_t index);
t_bool				ft_place_type_c(char **square, char type, size_t index);
t_bool				ft_place_type_d(char **square, char type, size_t index);

t_bool				ft_remove_type_a(char **square, char type, size_t index);
t_bool				ft_remove_type_b(char **square, char type, size_t index);
t_bool				ft_remove_type_c(char **square, char type, size_t index);
t_bool				ft_remove_type_d(char **square, char type, size_t index);

#endif
