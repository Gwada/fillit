/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_creator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:40:07 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/14 16:32:32 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_map_creator(t_data *data)
{
	int i;

	i = -1;
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
		ft_bzero(data->map[i], data->size);
	}
	return (1);
}
