/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:25:22 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/15 19:58:01 by dlavaury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char		car;
	int			map[4][2];
}				t_tetri;

typedef struct	s_data
{
	int			fd;
	int			ret;
	int			nb_tetri;
	int			nb_b;
	int			again;
	int			error;
	int			size;
	char		**map;
	char		buff[21];
	t_tetri		*tetri[27];
}				t_data;

/*
**	PROTOTYPES
*/

void			ft_putchar(char c);
void			ft_putstr(char const *s);
int				ft_nbparam_error(int nb_param);
int				ft_init(t_data *data, const char *file);
int				ft_read_file(t_data *data, const char *file);
void			ft_bzero(void *s, size_t n);
int				ft_open_file(t_data *data, const char *file);
void			ft_check_tetri(t_data *data);
int				ft_tetri_error(t_data *data);
void			ft_read_tetri(t_data *data);
t_tetri			*ft_new_tetri(void);
void			ft_find_type(t_data *data, int i);
void			ft_block_validator(t_data *data, int i);
char			*ft_realloc(char *to_free, int *size);
int				ft_fillit(t_data *data, int tetri, int i, int j);
int				ft_map_creator(t_data *data);
void			ft_map_cleaner(t_data *data);
void			ft_put_map(t_data *data);
int				ft_is_free(t_data *data, int tetrim, int i, int j);
void			ft_try_tetri(t_data *data, int tetrim, int i, int j);
void			ft_remove_last(t_data *data, int c_tetri, int i, int j);
void			ft_end_cleaner(t_data *data);

#endif
