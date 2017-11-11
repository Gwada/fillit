#include "fillit.h"

int		ft_init(t_data *data, const char *file)
{
	data->fd = 0;
	data->ret = 1;
	data->nb_tetri = 0;
	ft_bzero(data->buff, 22);
	if (!ft_read_file(data, file))
		return (0);
	return (1);
}
