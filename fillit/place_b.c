		
	
char		ft_place_ti(const char **s, char index, char tetra)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j + 1 < len && j - 1 >= 0 && s[i + 1][j - 1] == '.'\
			&& s[i + 1][j] == '.' && s[i + 1][j + 1] == '.')
			if (tetra->type == T_TETRA_INV)
			{
				s[i][j] = alpha_order;
				s[i + 1][j - 1] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_tl(const char **s, char index, char tetra)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j - 1 >= 0 && s[i + 1][j - 1] == '.'\
			&& s[i + 1][j] == '.' && s[i + 2][j] == '.')
			if (tetra->type == T_TETRA_LEFT)
			{
				s[i][j] = alpha_order;
				s[i + 1][j - 1] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_tr(const char **s, char index, char tetra)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j + 1 < len && s[i + 1][j] == '.'\
			&& s[i + 2][j] == '.' && s[i + 1][j + 1] == '.')
			if (tetra->type == T_TETRA_RIGHT)
			{
				s[i][j] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_sn(const char **s, char index, char tetra)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j - 1 >= 0 && s[i][j + 1] == '.'\
			&& s[i + 1][j - 1] == '.' && s[i + 1][j] == '.')
			if (tetra->type == S_TETRA_NOR)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i + 1][j - 1] = alpha_order;
				s[i + 1][j] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_si(const char **s, char index, char tetra)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j + 1 < len && s[i + 1][j] == '.'\
			&& s[i + 1][j + 1] == '.' && s[i + 2][j + 1] == '.')
			if (tetra->type == S_TETRA_TURNED)
			{
				s[i][j] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				s[i + 2][j + 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}