/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:57:39 by elebouch          #+#    #+#             */
/*   Updated: 2017/11/14 21:08:49 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fillit(t_data *data, int tetri, int i, int j)
{
	if (tetri == data->nb_tetri)
	{
		ft_put_map(data);
		ft_map_cleaner(data);
		return (1);
	}
	if (!data->error && !ft_map_creator(data))
		return (0);
	if (j == data->size)
	{
		j = 0;
		i++;
	}
	if (i == data->size)
	{
		ft_map_cleaner(data);
		data->size++;
		data->error = 0;
		return (ft_fillit(data, 0, 0, 0));
	}
	if (ft_is_free(data, tetri, i, j))
		return (ft_fillit(data, tetri + 1, i, j + 1));
	return (ft_fillit(data, tetri, i, j + 1));
}
