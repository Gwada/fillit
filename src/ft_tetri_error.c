#include "../includes/fillit.h"

int		ft_tetri_error(t_data *data)
{
	int		i;

	i = -1;
	while (++i < data->nb_tetri)
	{
		
		free(&data->tetri[i]);
	}
	return (0);
}
