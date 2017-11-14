/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:37:41 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/14 13:54:19 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_find_type(t_data *data, int i)
{
	int	j;
	int	block;

	ft_block_validator(data, i);
	block = data->nb_b;
	j = i - 1;
	if (!data->error && data->nb_b)
	{
		while (j >= 0 && block)
		{
			if (data->buff[j] == '#')
				block--;
			j -= (block) ? 1 : 0;
		}
		data->tetri[data->nb_tetri]->map[data->nb_b][0] = (i / 5) - (j / 5);
		data->tetri[data->nb_tetri]->map[data->nb_b][1] = (i % 5) - (j % 5);
	}
	data->nb_b++;
	if (data->nb_b > 4)
		data->error = 1;
}
