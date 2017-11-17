/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:28:40 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/17 11:24:27 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_check_tetri(t_data *data)
{
	size_t	i;

	i = -1;
	data->nb_b = 0;
	data->tetri[data->nb_tetri]->car = 'A' + data->nb_tetri;
	while (++i < 20 && !data->error)
	{
		if (!data->error && (i + 1) % 5)
		{
			if (data->buff[i] != '#' && data->buff[i] != '.')
				data->error = 1;
			if (data->buff[i] == '#' && ft_block_validator(data, i))
				ft_find_type(data, i);
		}
		else if (data->buff[i] != '\n')
			data->error = 1;
	}
	if ((data->buff[i] != '\n' && data->buff[i]) || data->nb_b != 4)
		data->error = 1;
	data->again = !data->buff[20] ? 0 : 1;
	data->nb_tetri++;
}
