/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:57:39 by elebouch          #+#    #+#             */
/*   Updated: 2017/11/15 14:42:03 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fillit(t_data *data, int tetri, int i, int j)
{
	if (!ft_map_creator(data))
		return (0);
	while (tetri < data->nb_tetri)
	{
		if (j == data->size)
		{
			i++;
			j = 0;
		}
		if (i == data->size)
		{
			if (tetri == 0)
			{
				data->error = 1;
				ft_map_cleaner(data);
				data->size++;
				return (ft_fillit(data, 0, 0, 0));
			}
			else
				return (0);
		}
		if (ft_is_free(data, tetri, i, j))
		{
			ft_try_tetri(data, tetri, i, j);
			if(ft_fillit(data, tetri + 1, 0, 0))
			{
			//	ft_map_cleaner(data);
				return (1);
			}
			else
			{
				ft_remove_last(data, tetri, i, j);
				j++;
			}
		}
		else
			j++;
	}
	if (tetri == data->nb_tetri)
		ft_put_map(data);
	return (1);
}
