/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:57:39 by elebouch          #+#    #+#             */
/*   Updated: 2017/11/14 16:56:35 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_fillit(t_data *data, size_t t)
{
	int i;

	i = -1;
	if (!ft_map_creator(data))
		return (0);
	while (++i < data->size && t < 26)
	{
		ft_put_map(data);
	}
	ft_map_cleaner(data);
	return (1);
}
