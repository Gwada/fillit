#include "fillit.h"

int		ft_tetri_error(t_data *data)
{
	int		i;

	i = -1;
	ft_putstr("error (erreur de map tetri)\n");
	while (++i < data->nb_tetri)
		free(data->tetri[i]);
	ft_putstr("clean tab tetri done!!\n");
	return (0);
}
