/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_block_validator.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:15:32 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/18 14:43:33 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_block_validator(t_data *data, int i)
{
	if (i - 5 >= 0 && data->buff[i - 5] == '#')
		data->link++;
	if (i - 1 >= 0 && data->buff[i - 1] == '#')
		data->link++;
	if (i + 1 < 19 && data->buff[i + 1] == '#')
		data->link++;
	if (i + 5 < 19 && data->buff[i + 5] == '#')
		data->link++;
	return (1);
}
