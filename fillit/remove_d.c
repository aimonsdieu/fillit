#include "fillit.h"

int		ft_rm_lql(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i + 1][j - 2] = '.';
	s[i + 1][j - 1] = '.';
	s[i + 1][j] = '.';
	return (1);
}

int		ft_rm_jn(char **s, int index)
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
	s[i + 2][j - 1] = '.';
	return (1);
}		

int		ft_rm_jdr(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i][j + 1] = '.';
	s[i + 1][j] = '.';
	s[i + 2][j] = '.';
	return (1);
}

int		ft_rm_jqr(char **s, int index)
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
	s[i + 1][j + 2] = '.';
	return (1);
}

int		ft_rm_jql(char **s, int index)
{
	int		i;
	int		j;
	int		len;

	len = (int)ft_strlen(*s);
	i = index / len;
	j = index % len;
	s[i][j] = '.';
	s[i][j + 1] = '.';
	s[i][j + 2] = '.';
	s[i + 1][j + 2] = '.';
	return (1);
}