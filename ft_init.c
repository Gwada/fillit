/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:34:36 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/13 14:34:37 by dlavaury         ###   ########.fr       */
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
	data->nb_bloc = 0;
	data->error = 0;
	data->again = 1;
	ft_bzero(data->buff, 22);
	while (++i < 26)
		data->tetri[i] = NULL;
	if (!ft_read_file(data, file))
		return (0);
	return (1);
}
