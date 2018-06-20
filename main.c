/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:27:22 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/16 20:14:05 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_nbparam_error(int nb_param)
{
	nb_param != 2 ? write(1, "usage: ./fillit source_file\n", 28) : 0;
	return (nb_param == 2);
}

static int		ft_init(t_data *data, const char *file)
{
	int			i;

	i = -1;
	data->fd = 0;
	data->ret = 1;
	data->nb_tetri = 0;
	data->nb_b = 0;
	data->error = 0;
	data->again = 1;
	while (++i <= 26)
		data->tetri[i] = NULL;
	if (ft_read_file(data, file))
		return (0);
	i = 2;
	while (i * i < data->nb_tetri * 4)
		i++;
	data->size = i;
	return (1);
}

int				main(int argc, char **argv)
{
	t_data		data;

	if (ft_nbparam_error(argc) && ft_init(&data, argv[1]))
	{
		data.error = 1;
		if (ft_fillit(&data, 0, 0, 0))
			exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
