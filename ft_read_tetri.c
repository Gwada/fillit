#include "fillit.h"

int		ft_read_tetri(t_data *data)
{
	if ((data->ret = read(data->fd, data->buff, 21) == -1))
		ft_putstr("error\n"); /* print error if read return error?? */
	return (data->ret == -1 ? 0 : 1);
}
