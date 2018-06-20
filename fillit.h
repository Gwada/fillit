/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlavaury <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:25:22 by dlavaury          #+#    #+#             */
/*   Updated: 2017/11/18 14:42:06 by dlavaury         ###   ########.fr       */
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
	int			i;
	char		car;
	int			map[4][2];
}				t_tetri;

typedef struct	s_data
{
	int			fd;
	int			ret;
	int			nb_tetri;
	int			nb_b;
	int			link;
	int			again;
	int			error;
	int			size;
	char		map[27][27];
	char		buff[21];
	t_tetri		*tetri[27];
}				t_data;

/*
**	PROTOTYPES
*/

int				ft_read_file(t_data *data, const char *file);
void			ft_bzero(void *s, size_t n);
void			ft_check_tetri(t_data *data, int i);
int				ft_fillit(t_data *data, int tetri, int i, int j);
void			ft_put_map(t_data *data);

#endif
