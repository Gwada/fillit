/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:35:04 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/17 09:38:31 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_nbparam_error(int nb_param)
{
	if (nb_param != 2)
		write(1, "usage: ./fillit source_file\n", 28);
	return (nb_param == 2 ? 1 : 0);
}
