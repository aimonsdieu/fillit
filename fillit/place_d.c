#include "fillit.h"

int		ft_place_lql(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (-1);
	if (i + 1 < len && j - 2 >= 0 && s[i + 1][j - 2] == '.'\
		&& s[i + 1][j - 1] == '.' && s[i + 1][j] == '.')
	{
		s[i][j] = tetro->order;
		s[i + 1][j - 2] = tetro->order;
		s[i + 1][j - 1] = tetro->order;
		s[i + 1][j] = tetro->order;
		tetro->pos = index;
		return (0);
	}
	return (-1);
}

int		ft_place_jn(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (-1);
	if (i + 2 < len && j - 1 >= 0 && s[i + 1][j] == '.'\
		&& s[i + 2][j] == '.' && s[i + 2][j - 1] == '.')
	{
		s[i][j] = tetro->order;
		s[i + 1][j] = tetro->order;
		s[i + 2][j] = tetro->order;
		s[i + 2][j - 1] = tetro->order;
		tetro->pos = index;
		return (0);
	}
	return (-1);
}		

int		ft_place_jdr(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (-1);
	if (i + 2 < len && j + 1 < len && s[i][j + 1] == '.'\
		&& s[i + 1][j] == '.' && s[i + 2][j] == '.')
	{
		s[i][j] = tetro->order;
		s[i][j + 1] = tetro->order;
		s[i + 1][j] = tetro->order;
		s[i + 2][j] = tetro->order;
		tetro->pos = index;
		return (0);
	}
	return (-1);
}

int		ft_place_jqr(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (-1);
	if (i + 1 < len && j + 2 < len && s[i + 1][j] == '.'\
		&& s[i + 1][j + 1] == '.' && s[i + 1][j + 2] == '.')
	{
		s[i][j] = tetro->order;
		s[i + 1][j] = tetro->order;
		s[i + 1][j + 1] = tetro->order;
		s[i + 1][j + 2] = tetro->order;
		tetro->pos = index;
		return (0);
	}
	return (-1);
}

int		ft_place_jql(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (-1);
	if (i + 1 < len && j + 2 < len && s[i][j + 1] == '.'\
		&& s[i][j + 2] == '.' && s[i + 1][j + 2] == '.')
	{
		s[i][j] = tetro->order;
		s[i][j + 1] = tetro->order;
		s[i][j + 2] = tetro->order;
		s[i + 1][j + 2] = tetro->order;
		tetro->pos = index;
		return (0);
	}
	return (-1);
}