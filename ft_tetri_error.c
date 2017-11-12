#include "fillit.h"

int		ft_tetri_error(t_data *data)
{
	int		i;

	i = 0;
	while (data->tetri[i])
		free(&data->tetri[i++]);
	ft_putstr("error\n");
	return (0);
}
