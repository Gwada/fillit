/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:51:01 by elebouch          #+#    #+#             */
/*   Updated: 2017/11/14 13:51:05 by elebouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_realloc(char *to_free, int *size)
{
	char	*new;
	int		cur;

	if (!(new = malloc((*size + 1) * sizeof(char*))))
		return (NULL);
	cur = -1;
	while (++cur < *size)
		new[cur] = to_free[cur];
	*size += 1;
	free(to_free);
	return (new);
}
