#include "fillit.h"

void	ft_check_tetri(t_data *data)
{
	int		i;

	i = -1;
	ft_putstr("tetrimino lu\n");
	ft_putstr(data->buff);
	ft_putstr("tetrimino apres sauvegarde\n");
	data->nb_bloc = 0;
	while (++i < 20 && !data->error)
	{
		if ((i + 1) % 5)
		{
			if (data->buff[i] == '#')
				data->nb_bloc++;
			if (data->nb_bloc > 4)
				data->error = 1;
			if (data->buff[i] != '#' && data->buff[i] != '.')
				data->error = 1;
		}
		else if (data->buff[i] != '\n')
			data->error = 1;
		ft_putchar ((data->tetri[data->nb_tetri]->map[i / 5][i % 5] = data->buff[i]));
	}
	if ((data->buff[i] != '\n' && data->buff[i]) || !data->buff[i])
		data->error = 1;
	ft_putstr("___________________________\n\n");
}
