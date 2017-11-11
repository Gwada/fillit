#include "fillit.h"

int		main(int argc, char **argv)
{
	t_data	data;

	if (ft_nbparam_error(argc))
	{
		if (!ft_init(&data, argv[1]))
			exit (EXIT_FAILURE);
	}
	else
		exit (EXIT_FAILURE);
	exit (EXIT_SUCCESS);
}
