#include "../includes/fillit.h"

int		ft_check_tetri(t_data *data)
{
	int		i;

	i = -1;
	while (++i < 21)
	{
		if ((!i || i % 5 > 0) && data->buff[i] != '.' || data->buff[i] != '#')
			return (0);
	}
	return (1);
}
