/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:38:38 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/16 20:32:02 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_free(t_data *data, int c_tetri, int i, int j)
{
	int abs;
	int ord;
	int verif;

	verif = -1;
	data->again = 1;
	while (++verif < 4 && data->again)
	{
		abs = data->tetri[c_tetri]->map[verif][0];
		ord = data->tetri[c_tetri]->map[verif][1];
		if (i + abs >= data->size || j + ord < 0 || j + ord >= data->size
			|| data->map[i + abs][j + ord] != '.')
			data->again = 0;
	}
	if (data->again)
	{
		verif = -1;
		while (++verif < 4)
		{
			abs = data->tetri[c_tetri]->map[verif][0];
			ord = data->tetri[c_tetri]->map[verif][1];
			data->map[i + abs][j + ord] = data->tetri[c_tetri]->car;
		}
	}
	return (data->again);
}
