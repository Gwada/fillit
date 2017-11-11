#include "../includes/fillit.h"

int		main(int argc, char **argv)
{
	t_data	data;

	if (!ft_nbparam_error(argc))
		exit ();
	else
	{
		ft_init(&data);
		if (!ft_read_file(&data, argv[1]))
		{
			ft_file_read_error();
			exit();
		}
	}
	return (0);
}
