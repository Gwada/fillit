#include "fillit.h"

int		ft_check_car(t_data *data, size_t i)
{
	if (data->buff[i] != '.' || data->buff[i] != '#')
		return (0);
	if (data->buff[i] == '#')
		data->nb_bloc++;
	if (data->nb_bloc > 4)
		return (0);
	return (1);
}
