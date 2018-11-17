
char		ft_place_zn(const char **s, char index, char alpha_order)
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
			&& s[i + 1][j + 1] == '.' && s[i + 1][j + 2] == '.')
			if (tetra->type == Z_TETRA_NOR)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				s[i + 1][j + 2] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_zi(const char **s, char index, char alpha_order)
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
			&& s[i + 1][j] == '.' && s[i + 2][j - 1] == '.')
			if (tetra->type == Z_TETRA_NOR)
			{
				s[i][j] = alpha_order;
				s[i + 1][j - 1] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j - 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_ln(const char **s, char index, char alpha_order)
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
			&& s[i + 2][j] == '.' && s[i + 2][j + 1] == '.')
			if (tetra->type == L_TETRA_NOR)
			{
				s[i][j] = alpha_order;
				s[i + 1][j] = alpha_order;
				s[i + 2][j] = alpha_order;
				s[i + 2][j + 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_ldr(const char **s, char index, char alpha_order)
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
			&& s[i + 1][j + 1] == '.' && s[i + 2][j + 1] == '.')
			if (tetra->type == L_TETRA_DEMIR)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i + 1][j + 1] = alpha_order;
				s[i + 2][j + 1] = alpha_order;
				return (index);
			}
	}
	return (-1);
}

char		ft_place_lqr(const char **s, char index, char alpha_order)
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
			&& s[i][j + 2] == '.' && s[i + 1][j] == '.')
			if (tetra->type == L_TETRA_QUARTR)
			{
				s[i][j] = alpha_order;
				s[i][j + 1] = alpha_order;
				s[i][j + 2] = alpha_order;
				s[i + 1][j] = alpha_order;
				return (index);
			}
	}
	return (-1);
}