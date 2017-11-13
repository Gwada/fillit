/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:28:40 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/13 14:29:35 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_check_tetri(t_data *data)
{
	size_t	i;

	i = -1;
	ft_putstr("tetrimino lu\n");
	ft_putstr(data->buff);
	ft_putstr("type du tetri apres scan\n");
	data->nb_bloc = 0;
	while (++i < 20 && !data->error)
	{
		if ((i + 1) % 5)
		{
			if (data->buff[i] == '#')
			{
				ft_check_type(s[i], i);
				data->nb_bloc++;
			}
			if (data->nb_bloc > 4)
				data->error = 1;
			if (data->buff[i] != '#' && data->buff[i] != '.')
				data->error = 1;
		}
		else if (data->buff[i] != '\n')
			data->error = 1;
		data->tetri[data->nb_tetri]->map[i / 5][i % 5] = data->buff[i];
	}
	if ((data->buff[i] != '\n' && data->buff[i]) || !data->buff[i])
		data->error = 1;
	ft_putstr("___________________________\n\n");
}
