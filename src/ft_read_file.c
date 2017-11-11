#include "../includes/fillit.h"

int		ft_read_file(t_data *data, const char *file)
{
	if (!ft_open_file(data, file))
		exit (EXIT_FAILURE);
	while (data->ret > 0)
	{
		data->ret = read(data->fd, data->buff, 21);
	}
	close (data->fd);
	return (1);
}
