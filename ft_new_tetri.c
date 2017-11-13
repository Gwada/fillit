/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:35:47 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/13 14:35:48 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_new_tetri(void)
{
	t_tetri	*new;

	if (!(new = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	return (new);
}
