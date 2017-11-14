/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:33:28 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/14 16:56:29 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_put_map(t_data *data)
{
	int i;
	int j;

	i = -1;
	while (++i < data->size)
	{
		j = -1;
		while (++j < data->size)
			ft_putchar(data->map[i][j]);
		ft_putchar('\n');
	}
}
