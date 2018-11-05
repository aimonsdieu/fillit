/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkabore <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 15:26:10 by pkabore           #+#    #+#             */
/*   Updated: 2018/10/28 11:34:46 by pkabore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*join(char *data, char *buff, size_t start_index)
{
	char	*tmp;

	if (!data)
		data = ft_strnew(0);
	tmp = ft_strjoin(data + start_index, buff);
	if (tmp)
	{
		free(data);
		data = tmp;
	}
	return (data);
}

static long int	ft_findnl(char *str, int *st)
{
	long int	index;

	index = 0;
	if (!str)
		return (-1);
	while (*(str + index) && *(str + index) != '\n')
		index++;
	if (*(str + index) == '\n' || (index < BUFF_SIZE && *st == 0))
	{
		if (*st == 0 && index > 0)
			*st = 1;
		return (index);
	}
	return (-1);
}

static int		ft_cp_line(char **line, char **data, long int nlpos)
{
	if (nlpos > 0)
		*line = ft_strsub(*data, 0, nlpos);
	if (*(*data + nlpos + 1) == 0)
	{
		free(*data);
		*data = ft_strnew(0);
	}
	else
		*data = join(*data, "", nlpos + 1);
	if (!data || !line)
		return (-1);
	return (1);
}

static int		f(char **s, int fd, char **line)
{
	int				st;
	char			*buff;
	long int		nlpos;

	st = 1;
	nlpos = ft_findnl(*(s + fd), &st);
	while (nlpos < 0)
	{
		if (!(buff = ft_strnew(BUFF_SIZE + 2)))
			return (-1);
		if ((st = read(fd, buff, BUFF_SIZE)) >= 0)
		{
			if (!st || (st < BUFF_SIZE && *(buff + st - 1) != '\n'))
				buff = ft_strcat(buff, "\n");
			if (!(*(s + fd) = join(*(s + fd), buff, 0)))
				return (-1);
		}
		if (st < 0)
			return (st);
		nlpos = ft_findnl(*(s + fd), &st);
		free(buff);
	}
	if (ft_cp_line(line, s + fd, nlpos) == -1)
		return (-1);
	return ((st > 0) ? 1 : st);
}

int				get_next_line(const int fd, char **line)
{
	static char		*data[MAX_FDES];
	int				status;
	size_t			i;

	i = 0;
	if (fd < 0 || fd >= MAX_FDES || line == NULL || BUFF_SIZE < 0)
		return (-1);
	if (!(*line = ft_strnew(0)))
		return (-1);
	status = f(data, fd, line);
	if (status != 0)
		return (status);
	ft_memdel((void **)(data + fd));
	while (i < MAX_FDES && *(data + i) == NULL)
		i++;
	if (i == MAX_FDES)
		ft_memdel((void **)&data);
	return (status);
}
