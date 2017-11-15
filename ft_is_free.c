/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 20:38:38 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/14 21:08:42 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_free(t_data *data, int tetrim, int i, int j)
{
	int abs;
	int ord;
	int verif;

	verif = -1;
	data->again = 1;
	while (++verif < 4 && data->again)
	{
		abs = data->tetri[tetrim]->map[verif][0];
		ord = data->tetri[tetrim]->map[verif][1];
		if (i + abs < data->size && j + ord >= 0 && j + ord < data->size
			&& data->map[i + abs][j + ord] != '.')
			data->again = 0;
	}
	if (data->again)
	{
		verif = -1;
		while (++verif < 4)
		{
			abs = data->tetri[tetrim]->map[verif][0];
			ord = data->tetri[tetrim]->map[verif][1];
			data->map[i + abs][j + ord] = data->tetri[tetrim]->car;
		}
		return (1);
	}
	return (0);
}
