/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:30:20 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/14 13:54:34 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_read_file(t_data *data, const char *file)
{
	if (!ft_open_file(data, file))
		return (0);
	while (data->ret && !data->error && data->again)
	{
		if (data->again)
			ft_read_tetri(data);
		if (data->ret && !data->error && data->again)
		{
			if (!(data->tetri[data->nb_tetri] = ft_new_tetri()))
				return (0);
			ft_check_tetri(data);
			if (data->nb_tetri > 26)
				data->error = 1;
		}
		if (data->error)
			ft_tetri_error(data);
	}
	close(data->fd);
	!data->error ? ft_putstr("correct file\n") : ft_putstr("error in file -> clean tab done\n");
	return (data->error);
}
