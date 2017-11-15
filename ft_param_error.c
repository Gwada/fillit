/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:35:04 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/15 15:55:26 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_nbparam_error(int nb_param)
{
	if (nb_param != 2)
		ft_putstr("usage: ./fillit sample_file\n");
	return (nb_param == 2 ? 1 : 0);
}
