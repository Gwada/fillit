/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:27:22 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/14 16:56:24 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_data	data;

	if (ft_nbparam_error(argc))
	{
		if (!ft_init(&data, argv[1]))
			exit(EXIT_FAILURE);
		if (!ft_fillit(&data, 0))
			exit(EXIT_FAILURE);
	}
	else
		exit(EXIT_FAILURE);
	return (0);
}
