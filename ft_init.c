/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:34:36 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/14 21:08:37 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_init(t_data *data, const char *file)
{
	int i;

	i = -1;
	data->fd = 0;
	data->ret = 1;
	data->nb_tetri = 0;
	data->nb_b = 0;
	data->error = 0;
	data->again = 1;
	while (++i < 26)
		data->tetri[i] = NULL;
	ft_read_file(data, file);
	i = 2;
	while (i * i < data->nb_tetri * 4)
		i++;
	data->size = i;
	data->error = 0;
	return (data->error);
}
