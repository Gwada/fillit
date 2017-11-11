#ifndef FILLIT_H
# define FILLIT_H

/*
**	BIBLIOTHEQUES
*/

# include <unistd.h>

/*
**	STRUCTURES
*/

typedef struct	s_data
{
	int			n_tetri;
	char		**map;
}				t_data;

/*
**	PROTOTYPES
*/

void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_param_error(int nb_param);

#endif
