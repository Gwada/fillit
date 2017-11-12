#include "fillit.h"

int		ft_read_file(t_data *data, const char *file)
{
	if (!ft_open_file(data, file))
		return (0);
	while (data->ret && !data->error)
	{
		ft_read_tetri(data);
		if (data->ret)
		{
			if (!(data->tetri[data->nb_tetri] = ft_new_tetri()))
				return (0); /* Error malloc on return quoi? */
			ft_check_tetri(data);
			if (!data->error)
				ft_find_type(data);
			data->nb_tetri++;
		}
		if (data->error)
			ft_tetri_error(data);
	}
	close (data->fd);
	return (1);
}
