/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:37:41 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/16 20:16:27 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_find_type(t_data *data, int i)
{
	int	j;

	if (!data->nb_b)
		data->tetri[data->nb_tetri]->i = i;
	j = data->tetri[data->nb_tetri]->i;
	if (!data->error && data->nb_b)
	{
		data->tetri[data->nb_tetri]->map[data->nb_b][0] = (i / 5) - (j / 5);
		data->tetri[data->nb_tetri]->map[data->nb_b][1] = (i % 5) - (j % 5);
	}
	data->nb_b++;
	if (data->nb_b > 4)
		data->error = 1;
}
