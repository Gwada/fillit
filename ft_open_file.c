/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:35:32 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/13 14:35:33 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_open_file(t_data *data, const char *filename)
{
	if ((data->fd = open(filename, O_RDONLY)) == -1)
		ft_file_read_error();
	return (data->fd == -1 ? 0 : 1);
}
