#include "fillit.h"

int		ft_read_file(t_data *data, const char *file)
{
	if (!ft_open_file(data, file))
		return (0);
	while (data->ret)
	{
		if (!ft_read_tetri(data))
			return (0);
		if (!(data->tetri[data->nb_tetri] = ft_new_tetri()))
			return (0); /* Error malloc on return quoi? */
		data->tetri[data->nb_tetri]->nb_bloc = 0;
		if (!ft_check_tetri(data))
			return (ft_tetri_error(data));
		data->nb_tetri++;
	}
	close (data->fd);
	return (1);
}
