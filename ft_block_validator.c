/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:15:32 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/16 19:26:42 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_block_validator(t_data *data, int i)
{
	data->error = 1;
	if ((i + 1 < 19 && data->buff[i + 1] == '#')
	|| (i + 5 < 19 && data->buff[i + 5] == '#')
	|| (i - 1 >= 0 && data->buff[i - 1] == '#')
	|| (i - 5 >= 0 && data->buff[i - 5] == '#'))
		data->error = 0;
	return (data->error ? 0 : 1);
}
