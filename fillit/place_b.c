#include "fillit.h"	
	
t_bool		ft_place_ti(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (false);
	if (i + 1 < len && j + 1 < len && j - 1 >= 0 && s[i + 1][j - 1] == '.'\
		&& s[i + 1][j] == '.' && s[i + 1][j + 1] == '.')
	{
		s[i][j] = tetro->order;
		s[i + 1][j - 1] = tetro->order;
		s[i + 1][j] = tetro->order;
		s[i + 1][j + 1] = tetro->order;
		tetro->pos = index;
		return (true);
	}
	return (false);
}

t_bool		ft_place_tl(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (false);
	if (i + 2 < len && j - 1 >= 0 && s[i + 1][j - 1] == '.'\
		&& s[i + 1][j] == '.' && s[i + 2][j] == '.')
	{
		s[i][j] = tetro->order;
		s[i + 1][j - 1] = tetro->order;
		s[i + 1][j] = tetro->order;
		s[i + 2][j] = tetro->order;
		tetro->pos = index;
		return (true);
	}
	return (false);
}

t_bool		ft_place_tr(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (false);
	if (i + 2 < len && j + 1 < len && s[i + 1][j] == '.'\
		&& s[i + 2][j] == '.' && s[i + 1][j + 1] == '.')
	{
		s[i][j] = tetro->order;
		s[i + 1][j] = tetro->order;
		s[i + 2][j] = tetro->order;
		s[i + 1][j + 1] = tetro->order;
		tetro->pos = index;
		return (true);
	}
	return (false);
}

t_bool		ft_place_sn(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (false);
	if (i + 1 < len && j - 1 >= 0 && s[i][j + 1] == '.'\
		&& s[i + 1][j - 1] == '.' && s[i + 1][j] == '.')
	{
		s[i][j] = tetro->order;
		s[i][j + 1] = tetro->order;
		s[i + 1][j - 1] = tetro->order;
		s[i + 1][j] = tetro->order;
		tetro->pos = index;
		return (true);
	}
	return (false);
}

t_bool		ft_place_si(char **s, int index, t_tetra *tetro)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	if (s[i][j] != '.')
		return (false);
	if (i + 2 < len && j + 1 < len && s[i + 1][j] == '.'\
		&& s[i + 1][j + 1] == '.' && s[i + 2][j + 1] == '.')
	{
		s[i][j] = tetro->order;
		s[i + 1][j] = tetro->order;
		s[i + 1][j + 1] = tetro->order;
		s[i + 2][j + 1] = tetro->order;
		tetro->pos = index;
		return (true);
	}
	return (false);
}