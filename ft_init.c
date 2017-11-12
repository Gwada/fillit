#include "fillit.h"

int		ft_init(t_data *data, const char *file)
{
	int i;

	i = -1;
	data->fd = 0;
	data->ret = 1;
	data->nb_tetri = 0;
	data->nb_bloc = 0;
	data->error = 0;
	data->again = 1;
	ft_bzero(data->buff, 22);
	while (++i < 26)
		data->tetri[i] = NULL;
	if (!ft_read_file(data, file))
		return (0);
	return (1);
}
