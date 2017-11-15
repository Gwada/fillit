/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 13:41:44 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/15 14:16:10 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_remove_last(t_data *data, int c_tetri, int i, int j)
{
	int abs;
	int ord;
	int bloc;

	bloc = -1;
	while (++bloc < 4)
	{
		abs = data->tetri[c_tetri]->map[bloc][0];
		ord = data->tetri[c_tetri]->map[bloc][1];
		data->map[i + abs][j + ord] = '.';
	}
}
