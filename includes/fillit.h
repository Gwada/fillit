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

typedef struct	s_tetri
{
}				t_tetri;

typedef struct	s_data
{
	int			fd;
	int			ret;
	int			nb_tetri;
	char		**map;
	char		buff[22];
	t_tetri		*tetri;
}				t_data;

/*
**	PROTOTYPES
*/

void	ft_putchar(char c);
void	ft_putstr(char const *s);
int		ft_nbparam_error(int nb_param);
int		ft_init(t_data *data, const char *file);
int		ft_read_file(t_data *data, const char *file);
void	ft_file_read_error(void);
size_t	ft_strlen(const char *s);
char	*ft_strsub(const char *s, unsigned int star, size_t len);
char	*ft_strnew(size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_open_file(t_data *data, const char *file);
int		ft_check_tetri(t_data *data);
int		ft_tetri_error(t_data *data);

#endif
