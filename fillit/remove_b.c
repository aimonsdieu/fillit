#include "fillit.h"	
	
t_bool		ft_rm_ti(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j - 1] = '.';
	s[i + 1][j] = '.';
	s[i + 1][j + 1] = '.';
	return (true);
}

t_bool		ft_rm_tl(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j - 1] = '.';
	s[i + 1][j] = '.';
	s[i + 2][j] = '.';
	return (true);
}

t_bool		ft_rm_tr(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j] = '.';
	s[i + 2][j] = '.';
	s[i + 1][j + 1] = '.';
	return (true);
}

t_bool		ft_rm_sn(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i][j + 1] = '.';
	s[i + 1][j - 1] = '.';
	s[i + 1][j] = '.';
	return (true);
}

t_bool		ft_rm_si(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j] = '.';
	s[i + 1][j + 1] = '.';
	s[i + 2][j + 1] = '.';
	return (true);
}