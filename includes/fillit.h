#ifndef FILLIT_H
# define FILLIT_H

/*
**	BIBLIOTHEQUES
*/

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

/*
**	STRUCTURES
*/

typedef struct	s_data
{
	int			fd;
	int			ret;
	int			nb_tetri;
	char		**map;
	char		buff[22];
}				t_data;

/*
**	PROTOTYPES
*/

void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_nbparam_error(int nb_param);
void	ft_init(t_data *data);
int		ft_read_file(t_data *data, const char *filename);
void	ft_file_read_error(void);

#endif
