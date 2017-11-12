#include "fillit.h"

t_tetri	*ft_new_tetri(void)
{
	t_tetri	*new;

	if (!(new = (t_tetri*)malloc(sizeof(t_tetri))))
		return (NULL);
	return (new);
}
