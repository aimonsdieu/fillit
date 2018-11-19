#include "fillit.h"

int		ft_place_zn(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j + 2 < len && s[i][j + 1] == '.'\
			&& s[i + 1][j + 1] == '.' && s[i + 1][j + 2] == '.')
		{
			s[i][j] = tetro->order;
			s[i][j + 1] = tetro->order;
			s[i + 1][j + 1] = tetro->order;
			s[i + 1][j + 2] = tetro->order;
			tetro->pos = index;
			return (0);
		}
		index++;
	}
	return (-1);
}

int		ft_place_zi(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j - 1 >= 0 && s[i + 1][j - 1] == '.'\
			&& s[i + 1][j] == '.' && s[i + 2][j - 1] == '.')
		{
			s[i][j] = tetro->order;
			s[i + 1][j - 1] = tetro->order;
			s[i + 1][j] = tetro->order;
			s[i + 2][j - 1] = tetro->order;
			tetro->pos = index;
			return (0);
		}
		index++;
	}
	return (-1);
}

int		ft_place_ln(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j + 1 < len && s[i + 1][j] == '.'\
			&& s[i + 2][j] == '.' && s[i + 2][j + 1] == '.')
		{
			s[i][j] = tetro->order;
			s[i + 1][j] = tetro->order;
			s[i + 2][j] = tetro->order;
			s[i + 2][j + 1] = tetro->order;
			tetro->pos = index;
			return (0);
		}
		index++;
	}
	return (-1);
}

int		ft_place_ldr(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j + 1 < len && s[i][j + 1] == '.'\
			&& s[i + 1][j + 1] == '.' && s[i + 2][j + 1] == '.')
		{
			s[i][j] = tetro->order;
			s[i][j + 1] = tetro->order;
			s[i + 1][j + 1] = tetro->order;
			s[i + 2][j + 1] = tetro->order;
			tetro->pos = index;
			return (0);
		}
		index++;
	}
	return (-1);
}

int		ft_place_lqr(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j + 2 < len && s[i][j + 1] == '.'\
			&& s[i][j + 2] == '.' && s[i + 1][j] == '.')
		{
			s[i][j] = tetro->order;
			s[i][j + 1] = tetro->order;
			s[i][j + 2] = tetro->order;
			s[i + 1][j] = tetro->order;
			tetro->pos = index;
			return (0);
		}
		index++;
	}
	return (-1);
}