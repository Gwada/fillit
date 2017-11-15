/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_cleaner.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 14:46:44 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/15 14:52:06 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_end_cleaner(t_data *data)
{
	int i;

	i = -1;
	ft_map_cleaner(data);
	while (++i < data->nb_tetri)
		free(data->tetri[i]);
}
