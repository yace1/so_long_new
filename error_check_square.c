/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <aprosper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:34:08 by aprosper          #+#    #+#             */
/*   Updated: 2022/05/13 12:10:51 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	error_check_square(t_display_map *map)
{
	int		fd;
	int		i;
	char	**str;

	fd = open(map->map, O_RDONLY);
	i = 0;
	str = malloc(sizeof(char *) * read_map_axe_y(map));
	while (i < read_map_axe_y(map))
	{
		str[i] = get_next_line(fd);
		i++;
	}
	if (ft_strlen(str[0]) == read_map_axe_y(map))
	{
		ft_printf("Error\nMap non rectangle !\n");
		exit(0);
	}
	free(str);
	return (0);
}
