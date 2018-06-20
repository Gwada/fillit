/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:28:40 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/18 14:57:01 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_find_type(t_data *data, int i)
{
	int			j;

	!data->nb_b ? data->tetri[data->nb_tetri]->i = i : 0;
	j = data->tetri[data->nb_tetri]->i;
	if (!data->error && data->nb_b)
	{
		data->tetri[data->nb_tetri]->map[data->nb_b][0] = (i / 5) - (j / 5);
		data->tetri[data->nb_tetri]->map[data->nb_b][1] = (i % 5) - (j % 5);
	}
	data->nb_b++;
	data->nb_b > 4 ? data->error = 1 : 0;
}

static int		ft_block_validator(t_data *data, int i)
{
	if (i - 5 >= 0 && data->buff[i - 5] == '#')
		data->link++;
	if (i - 1 >= 0 && data->buff[i - 1] == '#')
		data->link++;
	if (i + 1 < 19 && data->buff[i + 1] == '#')
		data->link++;
	if (i + 5 < 19 && data->buff[i + 5] == '#')
		data->link++;
	return (1);
}

void			ft_check_tetri(t_data *data, int i)
{
	data->nb_b = 0;
	data->link = 0;
	data->tetri[data->nb_tetri]->car = 'A' + data->nb_tetri;
	while (++i < 20 && !data->error)
	{
		if (!data->error && (i + 1) % 5)
		{
			data->buff[i] != '#' && data->buff[i] != '.' ? data->error = 1 : 0;
			if (!data->error && data->buff[i] == '#'
			&& ft_block_validator(data, i))
				ft_find_type(data, i);
		}
		else if (data->buff[i] != '\n')
			data->error = 1;
	}
	if ((data->buff[i] != '\n' && data->buff[i]) || data->nb_b != 4)
		data->error = 1;
	!data->error && data->link < 6 ? data->error = 1 : 0;
	data->again = !data->buff[20] ? 0 : 1;
	data->nb_tetri++;
}
