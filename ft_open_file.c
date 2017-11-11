#include "fillit.h"

int		ft_open_file(t_data *data, const char *filename)
{
	if ((data->fd = open(filename, O_RDONLY)) == -1)
		ft_file_read_error();
	return (data->fd == -1 ? 0 : 1);
}
