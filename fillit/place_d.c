char		ft_place_lql(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j - 2 >= 0 && s[i + 1][j - 2] == '.'\
			&& s[i + 1][j - 1] == '.' && s[i + 1][j] == '.')
			if (tetra->type == L_TETRA_QUARTL)
			{
				s[i][j] = alpha_order;
				s[i + 1][j - 2] = alpha_order;
				s[i + 1][j - 1] = alpha_order;
				s[i + 1][j] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_jn(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j - 1 >= 0 && s[i + 1][j] == '.'\
			&& s[i + 2][j] == '.' && s[i + 2][j - 1] == '.')
			if (tetra->type == J_TETRA_NOR)
			{
				s[i][j] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j] = alpha_order;
				s[i + 2][j - 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}		

char		ft_place_jdr(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j + 1 < len && s[i][j + 1] == '.'\
			&& s[i + 1][j] == '.' && s[i + 2][j] == '.')
			if (tetra->type == J_TETRA_DEMIR)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_jqr(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j + 2 < len && s[i + 1][j] == '.'\
			&& s[i + 1][j + 1] == '.' && s[i + 1][j + 2] == '.')
			if (tetra->type == J_TETRA_QUARTR)
			{
				s[i][j] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				s[i + 1][j + 2] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_jn(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 2 < len && j - 1 >= 0 && s[i + 1][j] == '.'\
			&& s[i + 2][j] == '.' && s[i + 2][j - 1] == '.')
			if (tetra->type == J_TETRA_NOR)
			{
				s[i][j] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j] = alpha_order;
				s[i + 2][j - 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_jql(const char **s, char index, char alpha_order)
{
	int		i;
	int		j;
	size_t	len;

	len = ft_strlen(*s);
	while ((index = ft_first_dot_pos(s, index)) >= 0)
	{
		i = index / len;
		j = index % len;
		if (i + 1 < len && j + 2 < len && s[i][j + 1] == '.'\
			&& s[i][j + 2] == '.' && s[i + 1][j + 2] == '.')
			if (tetra->type == J_TETRA_QUARTL)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i][j + 2] = alpha_order;
				s[i + 1][j + 2] = alpha_order;
				return (index);
			}
	}
	return (-1);
}