/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_creator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:40:07 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/17 10:06:16 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_map_creator(t_data *data)
{
	int i;
	int j;

	i = -1;
	if (data->error)
	{
		if (!(data->map = (char**)malloc(sizeof(char*) * data->size)))
			return (0);
		while (++i < data->size)
		{
			if (!(data->map[i] = (char*)malloc(sizeof(char) * data->size)))
			{
				while (--i >= 0)
					free(data->map[i]);
				free(data->map);
				return (0);
			}
			j = -1;
			while (++j < data->size)
				data->map[i][j] = '.';
		}
	}
	data->error = 0;
	return (1);
}
