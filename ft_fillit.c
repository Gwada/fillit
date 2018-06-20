/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elebouch <elebouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 13:57:39 by elebouch          #+#    #+#             */
/*   Updated: 2017/11/17 10:09:53 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_is_free(t_data *data, int c_tetri, int i, int j)
{
	int			abs;
	int			ord;
	int			verif;

	verif = -1;
	data->again = 1;
	while (++verif < 4 && data->again)
	{
		abs = data->tetri[c_tetri]->map[verif][0];
		ord = data->tetri[c_tetri]->map[verif][1];
		if (i + abs >= data->size || j + ord < 0 || j + ord >= data->size
		|| data->map[i + abs][j + ord] != '.')
			return (0);
	}
	while (--verif >= 0)
	{
		abs = data->tetri[c_tetri]->map[verif][0];
		ord = data->tetri[c_tetri]->map[verif][1];
		data->map[i + abs][j + ord] = data->tetri[c_tetri]->car;
	}
	return (1);
}

static void		ft_remove_last(t_data *data, int c_tetri, int i, int j)
{
	int			abs;
	int			ord;
	int			bloc;

	bloc = -1;
	while (++bloc < 4)
	{
		abs = data->tetri[c_tetri]->map[bloc][0];
		ord = data->tetri[c_tetri]->map[bloc][1];
		data->map[i + abs][j + ord] = '.';
	}
}

static void		ft_map_creator(t_data *data)
{
	int			i;
	int			j;

	i = -1;
	if (!data->error)
		return ;
	while (++i < data->size)
	{
		j = -1;
		while (++j < data->size)
			data->map[i][j] = '.';
	}
	data->error = 0;
}

static int		ft_oversize(t_data *data, int tetri)
{
	if (tetri == 0)
	{
		data->error = 1;
		data->size++;
		return (ft_fillit(data, 0, 0, 0));
	}
	return (0);
}

int				ft_fillit(t_data *data, int tetri, int i, int j)
{
	ft_map_creator(data);
	while (tetri < data->nb_tetri)
	{
		j == data->size ? i += 1 : 0;
		j == data->size ? j = 0 : 0;
		if (i == data->size)
			return (ft_oversize(data, tetri));
		if (data->map[i][j] == '.' && ft_is_free(data, tetri, i, j))
		{
			if (ft_fillit(data, tetri + 1, 0, 0))
				return (1);
			else
				ft_remove_last(data, tetri, i, j++);
		}
		else
			j++;
	}
	tetri == data->nb_tetri ? ft_put_map(data) : 0;
	return (1);
}
