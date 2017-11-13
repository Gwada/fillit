/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_tetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:31:31 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/13 14:34:23 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_read_tetri(t_data *data)
{
	if ((data->ret = read(data->fd, data->buff, 21)) == -1)
	{
		ft_putstr("error (erreur de lecture)\n");/*put error if read error ? */
		data->error = 1;
	}
}
