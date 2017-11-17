/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:15:32 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/17 11:24:30 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_block_validator(t_data *data, int i)
{
	data->error = 1;
	if (!data->nb_b && ((i + 1 < 18 && data->buff[i + 1] == '#')
		|| (i + 5 < 17 && data->buff[i + 5] == '#')))
		data->error = 0;
	else if (data->nb_b == 1 && (((i - 1 >= 0 && data->buff[i - 1] == '#')
		|| (i - 5 >= 0 && data->buff[i - 1] == '#'))
		&& ((i + 1 < 19 && data->buff[i - 1] == '#')
		|| (i + 4 < 19 && data->buff[i + 4] == '#')
		|| (i + 5 < 19 && data->buff[i + 5] == '#'))))
		data->error = 0;
	else if (data->nb_b == 2 && (((i - 1 >= 1 && data->buff[i - 1] == '#')
		|| (i - 5 >= 0 && data->buff[i - 5] == '#'))
		&& ((i + 1 < 20 && data->buff[i + 1] == '#')
		|| (i + 3 < 18 && data->buff[i + 3] == '#')
		|| (i + 4 < 19 && data->buff[i + 4] == '#')
		|| (i + 5 < 20 && data->buff[i + 5] == '#'))))
		data->error = 0;
	else if ((i - 1 >= 2 && data->buff[i - 1] == '#')
		|| (i - 5 >= 0 && data->buff[i - 5] == '#'))
		data->error = 0;
	return (data->error ? 0 : 1);
}
