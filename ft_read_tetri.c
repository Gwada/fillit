/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:31:31 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/18 14:29:34 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_read_tetri(t_data *data)
{
	ft_bzero(data->buff, 21);
	if ((data->ret = read(data->fd, data->buff, 21)) == -1)
		data->error = 1;
	if (!data->ret && data->again)
		data->error = 1;
}
