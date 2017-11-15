/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:15:32 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/15 19:23:12 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_block_validator(t_data *data, int i)
{
	data->error = 1;
	if (data->nb_b < 3
	&& ((i + 1 < 19 && data->buff[i + 1] == '#')
	|| (i + 5 < 19 && data->buff[i + 5] == '#')
	|| (i + 4 < 19 && data->buff[i + 4] == '#')
	|| (i + 3 < 19 && data->buff[i + 3] == '#')))
		data->error = 0;
	else if (data->nb_b == 3
	&& ((data->buff[i - 1] == '#')
	|| (data->buff[i - 5] == '#')))
		data->error = 0;
}
