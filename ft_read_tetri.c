#include "fillit.h"

void	ft_read_tetri(t_data *data)
{
	if ((data->ret = read(data->fd, data->buff, 21)) == -1)
	{
		ft_putstr("error (erreur de lecture)\n"); /* print error if read return error?? */
		data->error = 1;
	}
}
