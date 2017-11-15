/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_tetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:35:47 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/15 19:21:28 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri	*ft_new_tetri(void)
{
	t_tetri	*new;

	if (!(new = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	new->map[0][0] = 0;
	new->map[0][1] = 0;
	return (new);
}
