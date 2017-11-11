#include "../includes/fillit.h"

int		ft_read_file(t_data *data, const char *file)
{
	if (!ft_open_file(data, file))
		return (0);
	while (data->ret > 0)
	{
		data->ret = read(data->fd, data->buff, 21);
		if (!ft_check_tetri(data))
			return (ft_tetri_error(data));
		data->nb_tetri++;
	}
	close (data->fd);
	return (1);
}
