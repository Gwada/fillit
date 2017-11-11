#include "../includes/fillit.h"

int		ft_param_error(int nb_param)
{
	if (nb_param != 2)
		ft_putstr("error");
	return (nb_param == 2 ? 1 : 0);
}
