#include "fillit.h"

int		ft_check_tetri(t_data *data)
{
	int		i;

	i = -1;
	ft_putstr(data->buff);
	ft_putstr("affichage data->buff\n");
	if (data->buff[20] != '\n' && data->buff[20])
		return (0);
	while (++i < 20)
	{
		if ((i + 1) % 5)
		{
			if (data->buff[i] == '#')
				data->tetri[data->nb_tetri]->nb_bloc++;
			if (data->tetri[data->nb_tetri]->nb_bloc > 4)
				return (0);
			if (data->buff[i] != '#' && data->buff[i] != '.')
				return (0);
		}
		else if (data->buff[i] != '\n')
			return (0);
		ft_putchar ((data->tetri[data->nb_tetri]->map[i / 5][i % 5] = data->buff[i]));
	}
	ft_putstr("affichage du tetri apres savegarde");
	return (1);
}
