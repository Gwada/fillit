/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:28:40 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/13 17:34:49 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_check_tetri(t_data *data)
{
	size_t	i;

	i = -1;
	ft_putstr(data->buff);
	data->nb_b = 0;
	while (++i < 20 && !data->error)
	{
		if ((i + 1) % 5)
		{
			if (data->buff[i] != '#' && data->buff[i] != '.')
				data->error = 1;
			if (data->buff[i] == '#')
				ft_find_type(data, i);
		}
		else if (data->buff[i] != '\n')
			data->error = 1;
	}
	if ((data->buff[i] != '\n' && data->buff[i]) || !data->buff[i])
		data->error = 1;
}
