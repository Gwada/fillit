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

int		main(int argc, char **argv)
{
	t_data	data;

	if (ft_nbparam_error(argc) && ft_init(&data, argv[1]))
	{
		data.error = 1;
		if (ft_fillit(&data, 0, 0, 0))
		{
			ft_end_cleaner(&data);
			exit(EXIT_SUCCESS);
		}
	}
	exit(EXIT_FAILURE);
}
