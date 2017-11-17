/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:15:32 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/17 20:09:57 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	ft_first_block(t_data *data, int i)
{
	if ((i + 1 < 18 && data->buff[i + 1] == '#')
	|| (i + 5 < 19 && data->buff[i + 5] == '#'))
		data->error = 0;
}

static void	ft_second_block(t_data *data, int i)
{
	if ((i - 1 >= 0 && data->buff[i - 1] == '#'
	&& ((i + 1 < 18 && data->buff[i + 1] == '#')
	|| (i + 3 < 17 && data->buff[i + 3] == '#')
	|| (i + 5 < 18 && data->buff[i + 5] == '#')
	|| (i + 4 < 18 && data->buff[i + 4] == '#')))
	|| (i - 3 > 1 && i + 1 < 18
	&& data->buff[i - 3] == '#' && data->buff[i + 1] == '#')
	|| (i - 4 && i + 1 < 18
	&& data->buff[i - 4] == '#' && data->buff[i + 1] == '#')
	|| (i - 5 >= 0 && data->buff[i - 5] == '#'
	&& ((i + 1 < 18 && data->buff[i + 1] == '#')
	|| (i + 5 < 18 && data->buff[i + 5] == '#')
	|| (i + 4 < 18 && data->buff[i + 4] == '#'))))
		data->error = 0;
}

static void	ft_third_block(t_data *data, int i)
{
	if ((i - 1 && data->buff[i - 1] == '#'
	&& ((i + 1 < 19 && data->buff[i + 1] == '#')
	|| (i + 4 < 18 && data->buff[i + 4] == '#')
	|| (i + 5 < 19 && data->buff[i + 5] == '#')
	|| (i + 3 < 17 && data->buff[i + 3] == '#')))
	|| (i - 4 && i + 1 < 19
	&& data->buff[i - 4] == '#' && data->buff[i + 1] == '#')
	|| (i - 5 && data->buff[i - 5] == '#'
	&& ((i + 1 < 19 && data->buff[i + 1] == '#')
	|| (i + 5 < 19 && data->buff[i + 5] == '#'))))
		data->error = 0;
}

int			ft_block_validator(t_data *data, int i)
{
	if (data->nb_b == 3)
		return (1);
	data->error = 1;
	if (!data->nb_b)
		ft_first_block(data, i);
	else if (data->nb_b == 1)
		ft_second_block(data, i);
	else if (data->nb_b == 2)
		ft_third_block(data, i);
	return (data->error ? 0 : 1);
}
