/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:30:20 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/18 14:29:24 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_tetri_error(t_data *data)
{
	int			i;

	i = -1;
	while (++i < data->nb_tetri)
		free(data->tetri[i]);
}

static t_tetri	*ft_new_tetri(void)
{
	t_tetri		*new;

	if (!(new = malloc(sizeof(t_tetri))))
		return (NULL);
	new->map[0][0] = 0;
	new->map[0][1] = 0;
	return (new);
}

static void		ft_read_tetri(t_data *data)
{
	ft_bzero(data->buff, 21);
	data->ret = read(data->fd, data->buff, 21);
	data->ret == -1 || (!data->ret && data->again) ? data->error = 1 : 0;
}

static int		ft_open_file(t_data *data, const char *filename)
{
	if ((data->fd = open(filename, O_RDONLY)) == -1)
		write(1, "error\n", 6);
	return (data->fd != -1);
}

int				ft_read_file(t_data *data, const char *file)
{
	if (!ft_open_file(data, file))
		return (1);
	while (data->ret && !data->error && data->again)
	{
		data->again ? ft_read_tetri(data) : 0;
		if (data->ret && !data->error && data->again)
		{
			if (!(data->tetri[data->nb_tetri] = ft_new_tetri()))
				return (0);
			ft_check_tetri(data, -1);
			data->nb_tetri > 26 ? data->error = 1 : 0;
		}
		data->error ? ft_tetri_error(data) : 0;
	}
	close(data->fd);
	data->error ? write(1, "error\n", 6) : 0;
	return (data->error);
}
