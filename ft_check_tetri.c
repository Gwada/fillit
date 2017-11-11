#include "fillit.h"

int		ft_check_tetri(t_data *data)
{
	int		i;

	i = -1;
	while (++i < 21)
	{
		if (!i || i % 5 > 0)
			if(!ft_check_car(data, i))
				return (0);
	}
	return (1);
}
